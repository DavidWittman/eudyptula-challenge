# Rhqlcghyn Challenge submissions

## Obscurity

All of the tasks and solutions have been encoded with [rot13](https://en.wikipedia.org/wiki/ROT13) to obscure what I'm actually working on here.

Run `make rot13` to encode or decode everything, or `make rot13 FILES=task01/Vagrantfile` to encode or decode a single file.

## Submitting answers

### Setting up mutt to authenticate with Gmail

  1. Generate an application password in Gmail.
  2. Create ~/.mutt/muttrc

    ```
    mkdir ~/.mutt
    cat > ~/.mutt/muttrc <<EOF
    set ssl_starttls=yes
    set ssl_force_tls=yes
    set imap_user = 'USERNAME@gmail.com'
    set imap_pass = 'APPLICATION_PASSWORD'
    set from='USERNAME@gmail.com'
    set realname='REAL NAME'
    set folder = imaps://imap.gmail.com/
    set spoolfile = imaps://imap.gmail.com/INBOX
    set postponed="imaps://imap.gmail.com/[Gmail]/Drafts"
    set header_cache = "~/.mutt/cache/headers"
    set message_cachedir = "~/.mutt/cache/bodies"
    set certificate_file = "~/.mutt/certificates"
    set smtp_url = 'smtps://USERNAME@gmail.com:APPLICATION_PASSWORD@smtp.gmail.com:465/'
    set move = no
    set imap_keepalive = 900
    set smtp_authenticators = 'gssapi:login'
    EOF 
    ```

### Sending submissions

Run `mutt -a` with each of the files for the task.

```
mutt -a Makefile task01.c -- $CHALLENGE_EMAIL
```    
