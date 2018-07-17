/*
 * Eudyptula Challenge: Task 13
 *
 * Create a linked list using the kernel's list implementation,
 * but use the slab cache instead.
 *
 */

#define MODULE
#define LINUX
#define __KERNEL__

#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/list.h>
#include <linux/slab.h>
#include <linux/string.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("David Wittman");
MODULE_DESCRIPTION("Eudyptula Challenge Task 13");

#define IDENTITY_NAME_LEN 20

static struct kmem_cache *identity_cache;

struct identity {
	char name[IDENTITY_NAME_LEN];
	int id;
	bool busy;
	struct list_head list;
};

static LIST_HEAD(identity_list);

static int identity_create(char *name, int id)
{
	struct identity *i = kmem_cache_alloc(identity_cache, GFP_KERNEL);

	if (!i)
		return -ENOMEM;

	strncpy(i->name, name, IDENTITY_NAME_LEN);
	i->name[IDENTITY_NAME_LEN-1] = '\0';
	i->id = id;
	i->busy = false;

	list_add(&i->list, &identity_list);

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
		kmem_cache_free(identity_cache, i);
	}
}

int init_module(void)
{
	int retval = 0;
	struct identity *temp;

	identity_cache = kmem_cache_create("funky_buttlovin",
		sizeof(struct identity), 0, 0, NULL);
	if (!identity_cache)
		return -ENOMEM;

	retval = identity_create("Alice", 1);
	if (retval)
		return retval;

	retval = identity_create("Bob", 2);
	if (retval)
		return retval;

	retval = identity_create("Dave", 3);
	if (retval)
		return retval;

	retval = identity_create("Gena", 10);
	if (retval)
		return retval;

	temp = identity_find(3);
	pr_debug("id 3 = %s\n", temp->name);

	temp = identity_find(42);
	if (temp == NULL)
		pr_debug("id 42 not found\n");

	identity_destroy(2);
	identity_destroy(1);
	identity_destroy(10);
	identity_destroy(42);
	identity_destroy(3);

	return 0;
}

void cleanup_module(void)
{
}
