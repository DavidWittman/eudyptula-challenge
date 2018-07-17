#!/bin/bash

set -e

echo "### Making loopback FAT filesystems ####"
sudo /vagrant/mkfat.sh
gcc -o /tmp/task20 /vagrant/task20.c

echo "### BEFORE ###"
sudo fatlabel /dev/loop0
sudo fatlabel /dev/loop1

echo "### RUNNING task20 ###"
sudo /tmp/task20

echo "### AFTER ###"
sudo fatlabel /dev/loop0
sudo fatlabel /dev/loop1
