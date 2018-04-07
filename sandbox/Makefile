MCU     := attiny85
OBJDUMP := avr-objdump
GCC     := avr-gcc
CFLAGS  := -mmcu=$(MCU)
TGT     := disassemble


SRCS    := $(wildcard *.S)
OBJS    := $(SRCS:.S=.o)

all:    $(TGT).lst

%.o:    %.S
	$(GCC) -c $(CFLAGS) -o $@ $^


%.elf:  $(OBJS)
	$(GCC) -w -Os $(CFLAGS) -o $@ $^

%.lst:  %.elf
	$(OBJDUMP) -C -d $< > $@
