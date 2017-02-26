UNAME_S := $(shell uname -s)

ROT13_SCRIPT = scripts/rot13.sed

# The BSD version (specifically MacOS) requires a backup extension with -i
ifeq ($(UNAME_S),Darwin)
	ROT13_CMD := sed -i "" -f $(ROT13_SCRIPT)
else
	ROT13_CMD := sed -i -f $(ROT13_SCRIPT)
endif

.PHONY: rot13
rot13:
	find task*/ -type f -exec $(ROT13_CMD) {} \;
