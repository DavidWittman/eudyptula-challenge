#!/usr/bin/env bash

set -ex

ID_ATTR="/sys/devices/pci0000:00/0000:00:0b.0/usb1/1-1/id"

cat "$ID_ATTR"; echo
echo $(cat "$ID_ATTR") > "$ID_ATTR"
echo $?
