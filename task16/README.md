Run clone script, check out a next tag.

./clone.sh
git tag -l | grep next
git checkout next-20170324

## configure your kernel for staging modules

Apply the default config

```
make defconfig
```

Use curses interface to enable staging drivers.

```
make menuconfig
```

Then select Device Drivers >> Staging, and enable each staging module by selecting it with the 'm' key, then Save and exit, overwriting your existing kernel configuration in `.config`.

```
make modules_prepare
```

## Check all modules!

make C=1 M=drivers/staging

# Resources

staging: sm750fb: fix sparse warning for lock - https://patchwork.kernel.org/patch/6949241/

## Notes

```
$ make C=2 M=drivers/staging/pi433/

  WARNING: Symbol version dump ./Module.symvers
           is missing; modules will have no dependencies and modversions.

  CHECK   drivers/staging/pi433/pi433_if.c
drivers/staging/pi433/pi433_if.c:211:9: warning: mixing different enum types
drivers/staging/pi433/pi433_if.c:211:9:     int enum optionOnOff  versus
drivers/staging/pi433/pi433_if.c:211:9:     int enum packetFormat 
drivers/staging/pi433/pi433_if.c:211:9: warning: mixing different enum types
drivers/staging/pi433/pi433_if.c:211:9:     int enum optionOnOff  versus
drivers/staging/pi433/pi433_if.c:211:9:     int enum packetFormat 
drivers/staging/pi433/pi433_if.c:268:9: warning: mixing different enum types
drivers/staging/pi433/pi433_if.c:268:9:     int enum optionOnOff  versus
drivers/staging/pi433/pi433_if.c:268:9:     int enum packetFormat 
drivers/staging/pi433/pi433_if.c:268:9: warning: mixing different enum types
drivers/staging/pi433/pi433_if.c:268:9:     int enum optionOnOff  versus
drivers/staging/pi433/pi433_if.c:268:9:     int enum packetFormat 
drivers/staging/pi433/pi433_if.c:317:1: warning: symbol 'pi433_receive' was not declared. Should it be static?
drivers/staging/pi433/pi433_if.c:467:1: warning: symbol 'pi433_tx_thread' was not declared. Should it be static?
./include/linux/thread_info.h:129:18: warning: incorrect type in argument 1 (different modifiers)
./include/linux/thread_info.h:129:18:    expected void *<noident>
./include/linux/thread_info.h:129:18:    got void const *addr
drivers/staging/pi433/pi433_if.c:1155:36: error: incompatible types for operation (<)
drivers/staging/pi433/pi433_if.c:1155:36:    left side has type struct task_struct *tx_task_struct
drivers/staging/pi433/pi433_if.c:1155:36:    right side has type int
  CHECK   drivers/staging/pi433/rf69.c
drivers/staging/pi433/rf69.c:206:17: warning: dubious: x & !y
drivers/staging/pi433/rf69.c:436:5: warning: symbol 'rf69_set_bandwidth_intern' was not declared. Should it be static?
  Building modules, stage 2.
  MODPOST 1 modules
```

Example fix:
```
commit 6da2fa86e564cd3a7c1ebadcb8d0367857e8c369
Author: Guillermo O. Freschi <kedrot@gmail.com>
Date:   Tue Jul 4 16:46:43 2017 -0400

    media: staging: atomisp: gc2235: fix sparse warning: missing static
    
    Several local use structs were missing declarations. Added static
    qualifier to clean up Sparse warning.
    
    Signed-off-by: Guillermo O. Freschi <kedrot@gmail.com>
    Signed-off-by: Sakari Ailus <sakari.ailus@linux.intel.com>
    Signed-off-by: Mauro Carvalho Chehab <mchehab@s-opensource.com>
```

```
git send-email --to gregkh@linuxfoundation.org --to linux@Wolf-Entwicklungen.de --cc devel@driverdev.osuosl.org --cc linux-kernel@vger.kernel.org ../0001-staging-pi433-fix-sparse-warning-missing-static.patch
```

My patch: https://lkml.org/lkml/2017/7/23/124

Damnit! :(

> The fixes of this patch are fine, but there are already patches out there,
containing these fixes.

### Take two

https://lkml.org/lkml/2017/8/2/3

### Success!

My patch was merged into the staging-testing tree today @ 5b86429fdb7ee05bdac73d58b92e028215dbee9e
