/*
 * task08.c
 * Eudyptula Challenge: Task 08
 *
 * This is a kernel module which creates entries in debugfs
 *
 */

#define MODULE
#define LINUX
#define __KERNEL__

#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/debugfs.h>
#include <linux/fs.h>
#include <linux/string.h>
#include <linux/jiffies.h>
#include <linux/spinlock.h>

static ssize_t eudyptula_read(struct file *, char *, size_t, loff_t *);
static ssize_t eudyptula_write(struct file *, const char *, size_t, loff_t *);
static ssize_t foo_read(struct file *, char *, size_t, loff_t *);
static ssize_t foo_write(struct file *, const char *, size_t, loff_t *);

static char *eudyptula_id = "5d658d788cc9";
static struct dentry *dir;

static DEFINE_RWLOCK(foo_lock);
static char foo_msg[PAGE_SIZE];

static const struct file_operations eudyptula_fops = {
	.owner = THIS_MODULE,
	.read = eudyptula_read,
	.write = eudyptula_write
};

static ssize_t eudyptula_read(struct file *f, char *buf, size_t count,
	loff_t *offset)
{
	return simple_read_from_buffer(buf, count, offset, eudyptula_id,
		strlen(eudyptula_id));
}

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

static const struct file_operations foo_fops = {
	.owner = THIS_MODULE,
	.read = foo_read,
	.write = foo_write
};

static ssize_t foo_read(struct file *f, char *buf, size_t count,
	loff_t *offset)
{
	int ret;

	read_lock(&foo_lock);
	ret = simple_read_from_buffer(buf, count, offset, foo_msg,
		strlen(foo_msg));
	read_unlock(&foo_lock);

	return ret;
}

static ssize_t foo_write(struct file *f, const char *buf, size_t count,
	loff_t *offset)
{
	int ret;

	if (count >= PAGE_SIZE)
		return -EINVAL;

	write_lock(&foo_lock);
	ret = simple_write_to_buffer(foo_msg, sizeof(foo_msg), offset,
		buf, count);
	if (ret > 0)
		foo_msg[ret] = '\0';
	write_unlock(&foo_lock);

	return ret;
}

int init_module(void)
{
	dir = debugfs_create_dir("eudyptula", NULL);
	if (IS_ERR(dir)) {
		pr_debug("task08: failed to create /sys/kernel/debug/eudyptula\n");
		return -ENODEV;
	}

	if (!debugfs_create_file("id", 0666, dir, NULL, &eudyptula_fops)) {
		pr_debug("task08: failed to create id file\n");
		return -ENODEV;
	}

	if (!debugfs_create_u32("jiffies", 0444, dir, (u32 *)&jiffies)) {
		pr_debug("task08: failed to create jiffies file\n");
		return -ENODEV;
	}

	if (!debugfs_create_file("foo", 0644, dir, NULL, &foo_fops)) {
		pr_debug("task08: failed to create foo file\n");
		return -ENODEV;
	}

	return 0;
}

void cleanup_module(void)
{
	debugfs_remove_recursive(dir);
}

MODULE_LICENSE("GPL");
MODULE_AUTHOR("David Wittman");
MODULE_DESCRIPTION("Kernel module which creates /sys/kernel/debug/eudyptula");
