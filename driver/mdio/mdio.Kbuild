MDIO_SOURCES ?= 
MDIO_SOURCES += mdio/test1.c
MDIO_SOURCES += mdio/test2.c

obj-m := mdio.o
mdio-y := $(patsubst %.c,%.o,$(MDIO_SOURCES))
