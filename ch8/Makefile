ROOT=..
CFLAGS=-Wall -I../include
APUELIB=../lib/error.o  ../lib/prexit.o

PROGS = pfork pvfork pwait pforks pcmt psystem

all: $(PROGS)

psystem: psystem.o $(APUELIB)
psystem.o: psystem.c

pcmt: pcmt.o $(APUELIB)
pcmt.o: pcmt.c

pforks: pforks.o $(APUELIB)
pforks.o: pforks.c

pwait: pwait.o $(APUELIB)
pwait.o: pwait.c

pfork: pfork.o $(APUELIB)
pfork.o: pfork.c

pvfork: pvfork.o $(APUELIB)
pvfork.o: pvfork.c

$(LIBAPUE):
	(cd ../lib && $(MAKE))