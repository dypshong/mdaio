MDIO2_SOURCES ?= 
MDIO2_SOURCES += mdio2/test1.c
MDIO2_SOURCES += mdio2/test2.c

obj-m := mdio2.o
mdio2-y := $(patsubst %.c, %.o, $(MDIO2_SOURCES))

