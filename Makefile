# Modular Makefile

PROJPATH = $(PWD)
PROJNAME = $(shell basename $(PWD))
TSTAPP	 = testapp

-include $(wildcard mk/*.mk)

.PHONY: all
all:	$(PROJNAME) ## Built primary application
