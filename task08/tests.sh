#!/usr/bin/env bash

set -x

declare FOO=/sys/kernel/debug/eudyptula/foo

# Mount debugfs
sudo mount -t debugfs none /sys/kernel/debug
sudo chmod 0755 /sys/kernel/debug
sudo insmod /vagrant/task08.ko

# Read/write to id file
cat /sys/kernel/debug/eudyptula/id; echo
echo $(cat /sys/kernel/debug/eudyptula/id) > /sys/kernel/debug/eudyptula/id
echo $?

# Show jiffies
cat /sys/kernel/debug/eudyptula/jiffies
sleep 1
cat /sys/kernel/debug/eudyptula/jiffies

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
python -c 'import sys; sys.stdout.write("A" * 4097)' | sudo tee $FOO

# Clean up all eudyptula debugfs files
sudo rmmod task08.ko
ls -l /sys/kernel/debug/eudyptula
