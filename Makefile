FILES := $(wildcard task*/*)

rot13:
	sed -i "" -f scripts/rot13.sed $(FILES)

.PHONY: rot13
