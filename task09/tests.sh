#!/usr/bin/env bash

set -x

declare FOO=/sys/kernel/eudyptula/foo

sudo insmod /vagrant/task09.ko

# Read/write to id file
cat /sys/kernel/eudyptula/id; echo
echo $(cat /sys/kernel/eudyptula/id) | sudo tee /sys/kernel/eudyptula/id
echo $?

# Show jiffies
cat /sys/kernel/eudyptula/jiffies
sleep 1
cat /sys/kernel/eudyptula/jiffies

# Test foo file
## Normal users can read, not write
cat $FOO
echo "abcd" > $FOO

## Root can write
echo "abcd" | sudo tee $FOO
cat $FOO
echo "xyz" | sudo tee $FOO
cat $FOO

## Write up to one page size
python -c 'import sys; sys.stdout.write("A" * 4095)' | sudo tee $FOO
cat $FOO; echo
## Write over one page size
## sysfs only allows writes of PAGE_SIZE, the result here will be a 
## length of len(buf) % PAGE_SIZE
python -c 'import sys; sys.stdout.write("B" * 5096)' | sudo tee $FOO
[[ $(cat /sys/kernel/eudyptula/foo | wc -c) -eq 1000 ]] && echo "PASS"

# Clean up all eudyptula debugfs files
sudo rmmod task09.ko
ls -l /sys/kernel/eudyptula
