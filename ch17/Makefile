LIB = ../lib/*.o
CFLAGS = -Wall -I../include

PROGS = plmq sdmq namedun

all: $(PROGS)

namedun: namedun.o $(LIB)

plmq: plmq.o $(LIB)

sdmq: sdmq.o $(LIB)

$(LIB):
	(cd ../lib && $(MAKE))