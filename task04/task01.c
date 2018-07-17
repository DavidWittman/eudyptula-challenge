/*
 * main.c
 * Eudyptula Challenge: Task 01
 *
 * This is a kernel module which prints "Hello World!" to the kernel
 * debug log when loaded.
 */

#define MODULE
#define LINUX
#define __KERNEL__

#include <linux/module.h>
#include <linux/kernel.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("David Wittman");
MODULE_DESCRIPTION("Hello World example");

int init_module(void)
{
	pr_debug("Hello World!\n");
	return 0;
}


void cleanup_module(void)
{
}
