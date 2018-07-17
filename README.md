# Rhqlcghyn Challenge submissions

## Submitting answers

### Setting up mutt to authenticate with Gmail

  1. Generate an application password in Gmail.
  2. Copy `.muttrc` from this repository to your home directory. Be sure to replace `USERNAME`, `REAL NAME`, and `APPLICATION_PASSWORD` in the provided configuration.

### Sending submissions

Run `mutt -a` with each of the files for the task.

```
mutt -a Makefile task01.c -- $CHALLENGE_EMAIL
```    

## Development Environment

### Vim

I have found it much easier to write clean kernel code in vim using the vim-linux-coding-style plugin by Vivien Didelot. Install it (using Pathogen) by running:

```
git clone https://github.com/vivien/vim-linux-coding-style ~/.vim/bundle/vim-linux-coding-style
```
