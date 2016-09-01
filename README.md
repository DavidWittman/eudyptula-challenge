# Rhqlcghyn Challenge submissions

## Obscurity

All of the tasks and solutions have been encoded with [rot13](https://en.wikipedia.org/wiki/ROT13) to obscure what I'm actually working on here.

Run `make rot13` to encode or decode everything, or `make rot13 FILES=task01/Vagrantfile` to encode or decode a single file.

## Submitting answers

### Setting up mutt to authenticate with Gmail

  1. Generate an application password in Gmail.
  2. Copy `.muttrc` from this repository to your home directory. Be sure to replace `USERNAME` and `APPLICATION_PASSWORD` in the provided configuration.

### Sending submissions

Run `mutt -a` with each of the files for the task.

```
mutt -a Makefile task01.c -- $CHALLENGE_EMAIL
```    
