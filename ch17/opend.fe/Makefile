LIB = ../fdutil/*.o ../../lib/*.o 
CFLAGS = -Wall -I../../include -DMACOS -D_DARWIN_C_SOURCE

PROGS = opend

all: $(PROGS)

opend: main.o request.o bufargs.o cliargs.o $(LIB)
	$(CC) $(CFLAGS) -o opend main.o cliargs.o bufargs.o request.o $(LIB)
