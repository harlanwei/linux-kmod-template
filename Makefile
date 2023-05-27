MODULE_NAME = !!NAME!!
KERNELDIR = /usr/src/linux-headers-$(shell uname -r)
NPROC = $(shell nproc)

obj-m += $(MODULE_NAME).o
$(MODULE_NAME)-y := main.o

all:
	$(MAKE) -C $(KERNELDIR) M=$(PWD) modules

clean:
	$(MAKE) -C $(KERNELDIR) M=$(PWD) clean

clangd:
	bear -- $(MAKE) all -j$(NPROC)

load:
	sudo rmmod $(MODULE_NAME) || true
	sudo insmod $(MODULE_NAME).ko
