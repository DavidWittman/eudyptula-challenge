#!/bin/sh

git clone --depth 1 git://git.kernel.org/pub/scm/linux/kernel/git/torvalds/linux.git scratch
cd scratch
git remote add linux-next git://git.kernel.org/pub/scm/linux/kernel/git/next/linux-next.git
git fetch linux-next
git fetch --tags linux-next

if [ -n "$1" ]; then
    echo
    echo ">>> Checking out $1"
    git checkout "$1"
else
    echo
    echo '>>> Pick a tag from above and check it out. e.g. `git checkout next-20170323`'
fi
