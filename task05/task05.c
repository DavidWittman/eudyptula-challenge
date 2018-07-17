/*
 * task05.c
 * Eudyptula Challenge: Task 05
 *
 * This is a kernel module which prints "Hello World!" to the kernel
 * debug log when loaded.
 *
 * It is automatically loaded when any USB keyboard is plugged in.
 *
 */

#define MODULE
#define LINUX
#define __KERNEL__

#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/hid.h>
#include <linux/usb.h>

int init_module(void)
{
	pr_debug("Hello World!\n");
	return 0;
}


void cleanup_module(void)
{
}

static struct usb_device_id kbd_table[] = {
	{
		USB_INTERFACE_INFO(
			USB_INTERFACE_CLASS_HID,
			USB_INTERFACE_SUBCLASS_BOOT,
			USB_INTERFACE_PROTOCOL_KEYBOARD
		)
	},
	{ } /* Terminating entry */
};

MODULE_LICENSE("GPL");
MODULE_AUTHOR("David Wittman");
MODULE_DESCRIPTION("Hello World example, USB Keyboard hotplug edition.");
MODULE_DEVICE_TABLE(usb, kbd_table);
