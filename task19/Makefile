obj-m += task19.o
# Enable DEBUG messages so we can see output of pr_debug call
CFLAGS_task19.o := -DDEBUG

KDIR ?= /lib/modules/$(shell uname -r)/build

all:
	make -C $(KDIR) M=$(PWD) modules

clean:
	make -C $(KDIR) M=$(PWD) clean
