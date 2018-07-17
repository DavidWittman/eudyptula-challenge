/*
 * task06.c
 * Eudyptula Challenge: Task 06
 *
 * This is a kernel module which creates the misc character device
 * /dev/eudyptula (via udev).
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

static char *eudyptula_id = "5d658d788cc9";

static ssize_t eudyptula_read(struct file *, char *, size_t, loff_t *);
static ssize_t eudyptula_write(struct file *, const char *, size_t, loff_t *);

static const struct file_operations eudyptula_fops = {
	.owner = THIS_MODULE,
	.read = eudyptula_read,
	.write = eudyptula_write
};

static struct miscdevice eudyptula_dev = {
	MISC_DYNAMIC_MINOR,
	"eudyptula",
	&eudyptula_fops
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

int init_module(void)
{
	int ret;

	ret = misc_register(&eudyptula_dev);
	if (ret)
		pr_debug("Unable to register eudyptula misc device.");

	return ret;
}

void cleanup_module(void)
{
	misc_deregister(&eudyptula_dev);
}

MODULE_LICENSE("GPL");
MODULE_AUTHOR("David Wittman");
MODULE_DESCRIPTION("Kernel module which creates /dev/eudyptula");
