This is Task 06 of the Eudyptula Challenge
------------------------------------------

Nice job with the module loading macros.  Those are tricky, but a very
valuable skill to know about, especially when running across them in
real kernel code.

Speaking of real kernel code, let's write some!

The tasks this time are:
  - Take the kernel module you wrote for task 01, and modify it to be a
    misc char device driver.  The misc interface is a very simple way to
    be able to create a character device, without having to worry about
    all of the sysfs and character device registration mess.  And what a
    mess it is, so stick to the simple interfaces wherever possible.
  - The misc device should be created with a dynamic minor number, no
    need running off and trying to reserve a real minor number for your
    test module, that would be crazy.
  - The misc device should implement the read and write functions.
  - The misc device node should show up in /dev/eudyptula.
  - When the character device node is read from, your assigned id is
    returned to the caller.
  - When the character device node is written to, the data sent to the
    kernel needs to be checked.  If it matches your assigned id, then
    return a correct write return value.  If the value does not match
    your assigned id, return the "invalid value" error value.
  - The misc device should be registered when your module is loaded, and
    unregistered when it is unloaded.
  - Provide some "proof" this all works properly.
