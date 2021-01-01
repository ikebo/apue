LIB = ../lib/*.o ../lib/setfd.o
CFLAGS = -Wall -I../include

PROGS = addrinfo ruptime ruptimed

all: $(PROGS)

retry.o: retry.c

initsrv.o: initsrv.c

daemon.o: daemon.c

ruptimed: ruptimed.o initsrv.o daemon.o $(LIB)

ruptime: ruptime.o retry.o $(LIB)

addrinfo: addrinfo.o $(LIB)

$(LIB):
	(cd ../lib && $(MAKE))