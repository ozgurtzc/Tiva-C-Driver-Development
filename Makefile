PROJ_NAME=main

PART=TM4C123GH6PM

PROJECT_LIB = /home/Tiva-C-Driver-Development/Drivers/Inc
PROJECT_SRCS = /home/Tiva-C-Driver-Development/Drivers/Src

SRCS = $(PROJ_NAME).c $(PROJECT_SRCS)/gpio.c

# that's it, no need to change anything below this line!

#Create symbolic links to startup and linker
#These files can't be included in Open Source Repos
#Because of TI's restrictive licensing.
HACK:=$(shell mkdir -p gcc)

IPATH=$(PROJECT_LIB)/

all: gcc/$(PROJ_NAME).axf

gcc/$(PROJ_NAME).axf: gcc/$(PROJ_NAME).o
gcc/$(PROJ_NAME).axf: gcc/startup_gcc.o
gcc/$(PROJ_NAME).axf: gcc/uartstdio.o
gcc/$(PROJ_NAME).axf: $(TIVAWARE_LIB)/driverlib/gcc/libdriver.a
gcc/$(PROJ_NAME).axf: gcc/$(PROJ_NAME).ld

SCATTERgcc_$(PROJ_NAME)=gcc/$(PROJ_NAME).ld
ENTRY_$(PROJ_NAME)=ResetISR
CFLAGSgcc=-DTARGET_IS_TM4C123_RB1

ifneq (${MAKECMDGOALS},clean)
-include ${wildcard gcc/*.d} __dummy__
endif

program: gcc/$(PROJ_NAME).bin 
	openocd --file $(BOARD_CONFIG_FILE) -f extra/tiva-launchpad.cfg -c "tiva_flash `basename $(CURID)`gcc/$(PROJ_NAME).bin" -c shutdown

clean:
	@rm -vf gcc/*
	@rmdir -v gcc