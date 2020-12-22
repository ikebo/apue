INC=-I../include # no need
# VPATH = ../include

PROGS: error.o signal.o clrfl.o setfl.o ptell.o lockreg.o

all: $(PROGS)

lockreg.o: lockreg.c
	clang -Wall $(INC) -c lockreg.c

ptell.o: ptell.c
	clang -Wall $(INC) -c ptell.c

setfl.o: setfl.c
	clang -Wall $(INC) -c setfl.c

clrfl.o: clrfl.c
	clang -Wall $(INC) -c clrfl.c

error.o: error.c
	clang -Wall $(INC) -c error.c

signal.o: signal.c
	clang -Wall $(INC) -c signal.c

clean:
	rm -f error.o signal.o clrfl.o