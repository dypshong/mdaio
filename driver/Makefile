ifneq ($(KERNELRELEASE),) 
    include $(src)/Kbuild
else
    MODULE_NAMES = mdio mdio2
    
    KERNELDIR ?= /lib/modules/$(shell uname -r)/build
    PWD := $(shell pwd)

    COMPILE_VARIABLES := $(MODULE_NAMES)

    .PHONY: clean

    default:
		$(MAKE) -C $(KERNELDIR) M=$(PWD) modules         \
			MODULE_NAMES="$(MODULE_NAMES)"                 

    clean:
		rm -f *.o *.ko *.mod *.mod.c .*.cmd modules.order Module.symvers built-in.a
		@for module in $(MODULE_NAMES); do  \
			rm -f $$module/*.o              \
			$$module/*.ko                   \
			$$module/*.mod                  \
			$$module/*.mod.c                \
			$$module/.*o.cmd                \
			$$module/modules.order          \
			$$module/Module.symvers         \
			$$module/built-in.a             \
			;                               \
		done

endif # KERNELRELEASE
