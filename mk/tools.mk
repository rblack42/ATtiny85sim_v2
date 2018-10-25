# detect OS shell
ifeq ($(findstring cmd.exe,$(SHELL)),cmd.exe)
  DEVNUL := NUL
  WHICH := where
else
  DEVNUL := /dev/null
  WHICH := which
endif

TOOLS = make git g++ python
