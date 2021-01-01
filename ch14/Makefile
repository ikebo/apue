LIB = ../lib/clrfl.o ../lib/error.o  ../lib/setfl.o  ../lib/ptell.o ../lib/lockreg.o
CFLAGS = -Wall -I../include

PROGS = nbio dlk tellforce syncio aio mcp

all: $(PROGS)

mcp: mcp.o $(LIB)
mcp.o: mcp.c

aio: aio.o $(LIB)
aio.o: aio.c

syncio: syncio.o $(LIB)
syncio.o: syncio.c

tellforce: tellforce.o $(LIB)
tellforce.o: tellforce.c

dlk: dlk.o $(LIB)
dlk.o: dlk.c

nbio: nbio.o $(LIB)
nbio.o: nbio.c

$(LIB):
	(cd ../lib && MAKE)
