The volume label is called vol_label in the fat_boot_sector struct defined in include/uapi/linux/msdos_fs.h

fat_boot_sector->fat16->vol_label
fat_boot_sector->fat32->vol_label

All of the changes for this task will be happening in fs/fat
It looks like I can lock s_lock, write to sbi->vol_id, and then call fat_put_super in some way to accomplish this.

There are some differences I need to account for based on the length of the existing volume name, which I think i can use to determine whether or not it's FAT32.

---

It turns out my original approach was wrong... Here is the feedback I got from little:

> Please test with a fat32 filessytem and mlabel or fatlabel, I don't think you are setting the backup boot block properly.

After looking into it further, it looks like I was setting the Partition Volume Label when instead I need to set the Volume Label (or both). This is stored as an inode on the partition with the attribute 0x08 set. The following Wikipedia article is very helpful:

https://en.wikipedia.org/wiki/Design_of_the_FAT_file_system

I read a lot of the code in the fat filesystem within Linux and stole some things from the following functions:

 - fat_scan - I copied most of this code and used it to find an existing volume label
 - msdos_add_entry - Used this code to create a new volume label
