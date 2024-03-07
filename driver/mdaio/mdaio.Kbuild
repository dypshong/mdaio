MDIO_SOURCES ?= 
MDIO_SOURCES += mdaio/test1.c
MDIO_SOURCES += mdaio/test2.c

obj-m := mdaio.o
mdaio-y := $(patsubst %.c,%.o,$(MDIO_SOURCES))
