# Notes

```
DECLARE_WAIT_QUEUE_HEAD (wee_queue);
```

And then I think I want to use `wait_event_interruptible` to sleep the thread:

```
int wait_event_interruptible(wait_queue_head_t queue, int condition);
```

followed by `wake_up_interruptible` to wake the thread up later.


Here's an example:

```
DECLARE_WAIT_QUEUE_HEAD(wq);

ssize_t sleepy_read (struct file *filp, char *buf, size_t count, 
   loff_t *pos)
{
  printk(KERN_DEBUG "process %i (%s) going to sleep\n",
      current->pid, current->comm);
  interruptible_sleep_on(&wq);
  printk(KERN_DEBUG "awoken %i (%s)\n", current->pid, current->comm);
  return 0; /* EOF */
}

ssize_t sleepy_write (struct file *filp, const char *buf, size_t count,
        loff_t *pos)
{
  printk(KERN_DEBUG "process %i (%s) awakening the readers...\n",
     current->pid, current->comm);
  wake_up_interruptible(&wq);
  return count; /* succeed, to avoid retrial */
}
```

# Links

http://www.xml.com/ldd/chapter/book/ch05.html
http://www.makelinux.net/ldd3/chp-6-sect-2
