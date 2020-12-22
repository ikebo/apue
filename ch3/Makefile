ROOT=..
INC=-I$(ROOT)/include
CFLAGS=-ansi -Wall $(INC)
LIBAPUE=$(ROOT)/lib/error.o

PROGS=seek hole ptfd

all: $(PROGS)

seek: seek.o
seek.o: seek.c

hole: hole.o $(LIBAPUE)
hole.o: hole.c

ptfd: ptfd.o $(LIBAPUE)
ptfd.o: ptfd.c

$(LIBAPUE):
	(cd $(ROOT)/lib && $(MAKE))