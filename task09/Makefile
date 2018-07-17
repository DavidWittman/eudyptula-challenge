obj-m += task09.o
CFLAGS_task09.o := -DDEBUG

KDIR ?= /lib/modules/$(shell uname -r)/build

all:
	make -C $(KDIR) M=$(PWD) modules

clean:
	make -C $(KDIR) M=$(PWD) clean

lint:
	../scripts/checkpatch.pl --no-tree -f task09.c
