/*
 * task20.c
 *
 * This is a userspace program which calls the FAT ioctl which I
 * created for this task, FAT_IOCTL_SET_VOLUME_LABEL.
 *
 */

#include <stdio.h>
#include <sys/fcntl.h>
#include <sys/ioctl.h>

#define FAT_IOCTL_SET_VOLUME_LABEL _IOW('r', 0x14, char *)

int set_volume_label(char *path, char *label)
{
	int fd;
	int retcode;
	fd = open(path, O_RDONLY);
	if (fd == -1) {
		printf("Error opening %s\n", path);
		return fd;
	}

	retcode = ioctl(fd, FAT_IOCTL_SET_VOLUME_LABEL, label);
	close(fd);
	return retcode;
}

int main(void)
{
	int retcode;

	retcode = set_volume_label("/mnt/fat16/", "AFTER");
	if (retcode != 0)
		return retcode;

	set_volume_label("/mnt/fat32/", "AFTER");
	if (retcode != 0)
		return retcode;

	return 0;
}
