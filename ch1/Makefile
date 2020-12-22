ROOT=..
INC=-I../include -I../lib
LIBAPUE=$(ROOT)/lib/error.o $(ROOT)/lib/signal.o

PROGS = myls mycp stdcp ptpid mysh pterrno ptguid
all: $(PROGS)

myls: myls.o $(LIBAPUE)
	clang -Wall $(INC) -o myls myls.o $(LIBAPUE)
myls.o: myls.c
	clang -Wall $(INC) -c myls.c

mycp: mycp.o $(LIBAPUE)
	clang -Wall $(INC) -o mycp mycp.o $(LIBAPUE)
mycp.o: mycp.c
	clang -Wall $(INC) -c mycp.c

stdcp: stdcp.o $(LIBAPUE)
stdcp.o: stdcp.c
	clang -Wall $(INC) -c stdcp.c

ptpid: ptpid.o $(LIBAPUE)
ptpid.o: ptpid.c
	clang -Wall $(INC) -c ptpid.c

mysh: mysh.o $(LIBAPUE)
mysh.o: mysh.c
	clang -Wall $(INC) -c mysh.c

pterrno: pterrno.o
pterrno.o: pterrno.c
	clang -Wall $(INC) -c pterrno.c

ptguid: ptguid.o
ptguid.o: ptguid.c
	clang -Wall $(INC) -c ptguid.c

$(LIBAPUE):
	(cd $(ROOT)/lib && $(MAKE))

clean:
	rm -f myls myls.o