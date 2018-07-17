#!/bin/bash

set -x

sudo insmod /vagrant/task19.ko
sleep 1
python -c 'import smtplib; s = smtplib.SMTP("127.0.0.1"); s.sendmail("vagrant@localhost", "vagrant@localhost", "Subject: 5d658d788cc9"); s.quit()'

# NOTE: Sometimes it will buffer the first entry to dmesg
dmesg | tail
