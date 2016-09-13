FILES := $(wildcard task*/*)
UNAME_S := $(shell uname -s)

ROT13_SCRIPT = scripts/rot13.sed

# The BSD version (specifically MacOS) requires a backup extension with -i
ifeq ($(UNAME_S),Darwin)
	ROT13_CMD := sed -i"" -f $(ROT13_SCRIPT) $(FILES)
else
	ROT13_CMD := sed -i -f $(ROT13_SCRIPT) $(FILES)
endif

rot13:
	$(ROT13_CMD)

.PHONY: rot13
