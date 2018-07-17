#!/bin/sh

set -e

# Size of filesystems in MiB
SIZE="64"

mkdir -p /mnt/fat16 /mnt/fat32

echo "### Making /dev/loop0 ###"
dd if=/dev/zero of=/tmp/fat16 bs=1M count="$SIZE"
losetup /dev/loop0 /tmp/fat16
mkfs.vfat -n BEFORE -F 16 /dev/loop0
mount /dev/loop0 /mnt/fat16
fsck -ay /dev/loop0 || true

echo "### Making /dev/loop1 ###"
dd if=/dev/zero of=/tmp/fat32 bs=1M count="$SIZE"
losetup /dev/loop1 /tmp/fat32
mkfs.vfat -n BEFORE -F 32 /dev/loop1
mount /dev/loop1 /mnt/fat32
fsck -ay /dev/loop1 || true
