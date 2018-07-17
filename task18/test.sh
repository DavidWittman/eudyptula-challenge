#!/bin/bash

set -x

DEVICE=/dev/eudyptula

sudo insmod /vagrant/task18.ko

[[ -c "$DEVICE" ]] || (echo "$DEVICE not created properly!"; exit 1;)

echo -n "Alice" > $DEVICE
echo -n "Bob" > $DEVICE
sleep 15
echo -n "Dave" > $DEVICE
echo -n "Gena" > $DEVICE

sudo rmmod task18

dmesg | tail
