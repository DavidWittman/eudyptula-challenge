/*
 * task18.c
 * Eudyptula Challenge: Task 18
 *
 * This is a kernel module which creates a kernel thread which listens to a
 * wait queue.
 *
 */

#define MODULE
#define LINUX
#define __KERNEL__

#define IDENTITY_NAME_LEN 20

#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/fs.h>
#include <linux/string.h>
#include <linux/miscdevice.h>
#include <linux/kthread.h>
#include <linux/slab.h>
#include <linux/delay.h>

static DECLARE_WAIT_QUEUE_HEAD(wee_wait);

static LIST_HEAD(identity_list);

/*
 * This mutex protects the identity list and counter
 */
DEFINE_MUTEX(identity_mutex);

// This id number is incremented after each successful write to misc char dev
static int counter;

struct identity {
	char name[IDENTITY_NAME_LEN];
	int id;
	bool busy;
	struct list_head list;
};

static int identity_create(char *name, int id)
{
	struct identity *i = kmalloc(sizeof(struct identity), GFP_KERNEL);

	if (i == NULL)
		return -ENOMEM;

	strncpy(i->name, name, IDENTITY_NAME_LEN);
	i->name[IDENTITY_NAME_LEN-1] = '\0';
	i->id = id;
	i->busy = false;

	if (mutex_lock_interruptible(&identity_mutex))
		return -ERESTARTSYS;
	list_add(&i->list, &identity_list);
	mutex_unlock(&identity_mutex);

	return 0;
}

static struct identity *identity_find(int id)
{
	struct identity *i = NULL;

	list_for_each_entry(i, &identity_list, list)
		if (i->id == id)
			return i;

	return NULL;
}

static void identity_destroy(int id)
{
	struct identity *i = identity_find(id);

	if (i != NULL) {
		list_del(&i->list);
		kfree(i);
	}
}

static struct identity *identity_get(void)
{
	struct identity *i = NULL;

	if (list_empty(&identity_list))
		return NULL;

	if (mutex_lock_interruptible(&identity_mutex)) {
		pr_debug("Unable to acquire identity lock");
		return NULL;
	}
	i = list_first_entry(&identity_list, struct identity,
					      list);
	list_del(&i->list);
	mutex_unlock(&identity_mutex);

	return i;
}

static struct task_struct *eudyptula_thread;

static ssize_t eudyptula_write(struct file *, const char *, size_t, loff_t *);

static const struct file_operations eudyptula_fops = {
	.owner = THIS_MODULE,
	.write = eudyptula_write
};

static struct miscdevice eudyptula_dev = {
	.minor = MISC_DYNAMIC_MINOR,
	.name = "eudyptula",
	.fops = &eudyptula_fops,
	.mode = S_IWUGO
};

static ssize_t eudyptula_write(struct file *f, const char *buf, size_t count,
	loff_t *offset)
{
	char msg[IDENTITY_NAME_LEN] = {0};
	int ret;

	ret = simple_write_to_buffer(msg, sizeof(msg), offset, buf, count);
	if (ret < 0)
		return ret;

	msg[IDENTITY_NAME_LEN-1] = '\0';

	ret = identity_create(msg, counter);
	if (ret)
		return -EINVAL;

	// Lock to increment counter
	if (mutex_lock_interruptible(&identity_mutex))
		return -ERESTARTSYS;
	counter++;
	mutex_unlock(&identity_mutex);

	wake_up_interruptible(&wee_wait);

	return count;
}

static int main_thread(void *unused)
{
	int last = 0;
	struct identity *i = NULL;

	while (!kthread_should_stop()) {
		// Execute if the counter has been incremented
		if (wait_event_interruptible(wee_wait,
				counter > last || kthread_should_stop()))
			return -ERESTARTSYS;

		if (kthread_should_stop())
			break;

		// Update our condition variable
		if (mutex_lock_interruptible(&identity_mutex))
			return -ERESTARTSYS;
		last++;
		mutex_unlock(&identity_mutex);

		i = identity_get();
		if (i) {
			msleep_interruptible(5000);
			pr_debug("Name: %s, ID: %d", i->name, i->id);
			kfree(i);
		}
	}

	return 0;
}

int init_module(void)
{
	int ret;

	eudyptula_thread = kthread_run(&main_thread, NULL, "eudyptula");

	if (IS_ERR(eudyptula_thread))
		pr_debug("eudyptula thread creation failed");
	else
		pr_debug("eudyptula thread created successfully");

	ret = misc_register(&eudyptula_dev);
	if (ret)
		pr_debug("Unable to register eudyptula misc device.");

	return ret;
}

void cleanup_module(void)
{
	struct identity *i, *next;

	misc_deregister(&eudyptula_dev);
	kthread_stop(eudyptula_thread);
	list_for_each_entry_safe(i, next, &identity_list, list) {
		list_del(&i->list);
		kfree(i);
	}
}

MODULE_LICENSE("GPL");
MODULE_AUTHOR("David Wittman");
MODULE_DESCRIPTION("Eudyptula Challenge Task 18");
