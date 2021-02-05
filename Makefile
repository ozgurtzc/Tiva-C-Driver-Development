PROJECT = main
SRCS = $(wildcard *.c) \
	  $(wildcard Drivers/Src/*.c)
OBJ = obj/

OBJS = $(addprefix $(OBJ),$(notdir $(SRCS:.c=.o)))

INC = -Iinc

LD_SCRIPT = tm4c123gh6pm.ld

CC = arm-none-eabi-gcc 
LD = arm-none-eabi-ld 
OBJCOPY = arm-none-eabi-objcopy 
RM      = rm -rf
MKDIR   = @mkdir -p $(@D) 

CFLAGS = -ggdb -mthumb -mcpu=cortex-m4 -mfpu=fpv4-sp-d16 
CFLAGS += -mfloat-abi=softfp -Os -MD -std=c99 -c    

LDFLAGS = -T $(LD_SCRIPT) -e Reset_Handler 

all: bin/$(PROJECT).bin

$(OBJ)%.o: %.c               
	$(MKDIR)              
	$(CC) -o $@ $^ $(INC) $(CFLAGS)

$(OBJ)%.o: Drivers/Src/%.c                
	$(MKDIR)              
	$(CC) -o $@ $^ $(INC) $(CFLAGS)
	
bin/$(PROJECT).elf: $(OBJS)      
	$(MKDIR)              
	$(LD) -o $@ $^ $(LDFLAGS)

bin/$(PROJECT).bin: bin/$(PROJECT).elf   
	$(OBJCOPY) -O binary $< $@

clean:
	-$(RM) obj
	-$(RM) bin

.PHONY: all clean