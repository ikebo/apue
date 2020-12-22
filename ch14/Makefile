LIB = ../lib/clrfl.o ../lib/error.o  ../lib/setfl.o  ../lib/ptell.o ../lib/lockreg.o
CFLAGS = -Wall -I../include

PROGS = nbio dlk tellforce

all: $(PROGS)

tellforce: tellforce.o $(LIB)
tellforce.o: tellforce.c

dlk: dlk.o $(LIB)
dlk.o: dlk.c

nbio: nbio.o $(LIB)
nbio.o: nbio.c

$(LIB):
	(cd ../lib && MAKE)
