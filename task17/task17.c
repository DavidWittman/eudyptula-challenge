/*
 * task17.c
 * Eudyptula Challenge: Task 17
 *
 * This is a kernel module which creates a kernel thread which listens to a
 * wait queue.
 *
 */

#define MODULE
#define LINUX
#define __KERNEL__

#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/fs.h>
#include <linux/string.h>
#include <linux/miscdevice.h>
#include <linux/kthread.h>

static DECLARE_WAIT_QUEUE_HEAD(wee_wait);

static struct task_struct *thread;

static char *eudyptula_id = "5d658d788cc9";

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
	char msg[16] = {0};
	int ret;

	ret = simple_write_to_buffer(msg, sizeof(msg), offset, buf, count);
	if (ret < 0)
		return ret;

	if (!strncmp(msg, eudyptula_id, strlen(eudyptula_id))
		&& count - 1 == strlen(eudyptula_id))
		return count;

	return -EINVAL;
}

static int main_thread(void *unused)
{
	while (1) {

	if (wait_event_interruptible(wee_wait, kthread_should_stop()))
		return -ERESTARTSYS;

	if (kthread_should_stop())
		break;
	}

	return 0;
}

int init_module(void)
{
	int ret;

	thread = kthread_create(&main_thread, NULL, "eudyptula");

	if (IS_ERR(thread))
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
	misc_deregister(&eudyptula_dev);
	kthread_stop(thread);
}

MODULE_LICENSE("GPL");
MODULE_AUTHOR("David Wittman");
MODULE_DESCRIPTION("Creates a kernel thread and uses a wait queue");
