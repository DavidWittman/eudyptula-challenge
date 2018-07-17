/*
 * task09.c
 * Eudyptula Challenge: Task 09
 *
 * This is a kernel module which creates entries in sysfs
 *
 */

#define MODULE
#define LINUX
#define __KERNEL__

#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/fs.h>
#include <linux/string.h>
#include <linux/jiffies.h>
#include <linux/spinlock.h>

static ssize_t id_show(struct kobject *, struct kobj_attribute *, char *);
static ssize_t id_store(struct kobject *, struct kobj_attribute *,
		const char *, size_t);
static ssize_t jiffies_show(struct kobject *, struct kobj_attribute *, char *);
static ssize_t foo_show(struct kobject *, struct kobj_attribute *, char *);
static ssize_t foo_store(struct kobject *, struct kobj_attribute *,
		const char *, size_t);

static char *id = "5d658d788cc9";

static DEFINE_RWLOCK(foo_lock);
static char foo_msg[PAGE_SIZE];

static struct kobj_attribute id_attribute = __ATTR_RW(id);
static struct kobj_attribute jiffies_attribute = __ATTR_RO(jiffies);
static struct kobj_attribute foo_attribute = __ATTR_RW(foo);

static struct attribute *attrs[] = {
	&id_attribute.attr,
	&jiffies_attribute.attr,
	&foo_attribute.attr,
	NULL,	/* need to NULL terminate attribute list */
};

static struct attribute_group attr_group = {
	.attrs = attrs,
};

static struct kobject *dir;

static ssize_t id_show(struct kobject *kobj, struct kobj_attribute *attr,
			char *buf)
{
	return sprintf(buf, "%s\n", id);
}

static ssize_t id_store(struct kobject *kobj, struct kobj_attribute *attr,
			const char *buf, size_t count)
{
	if (count - 1 == strlen(id) && !strncmp(buf, id, strlen(id)))
		return count;

	return -EINVAL;
}

static ssize_t jiffies_show(struct kobject *kobj, struct kobj_attribute *attr,
			char *buf)
{
	return sprintf(buf, "%lu\n", jiffies);
}

static ssize_t foo_show(struct kobject *kobj, struct kobj_attribute *attr,
			char *buf)
{
	int ret;

	read_lock(&foo_lock);
	ret = sprintf(buf, "%s", foo_msg);
	read_unlock(&foo_lock);

	return ret;
}

static ssize_t foo_store(struct kobject *kobj, struct kobj_attribute *attr,
			const char *buf, size_t count)
{
	int ret;

	write_lock(&foo_lock);
	ret = snprintf(foo_msg, sizeof(foo_msg), "%.*s",
			(int)min(count, sizeof(foo_msg) - 1), buf);
	if (ret > 0)
		foo_msg[ret] = '\0';
	write_unlock(&foo_lock);

	return ret;
}

int init_module(void)
{
	int retval;

	dir = kobject_create_and_add("eudyptula", kernel_kobj);
	if (!dir) {
		pr_debug("task09: failed to create /sys/kernel/eudyptula\n");
		return -ENOMEM;
	}

	retval = sysfs_create_group(dir, &attr_group);
	if (retval)
		kobject_put(dir);

	return retval;
}

void cleanup_module(void)
{
	kobject_put(dir);
}

MODULE_LICENSE("GPL");
MODULE_AUTHOR("David Wittman");
MODULE_DESCRIPTION("Kernel module which creates /sys/kernel/eudyptula");
