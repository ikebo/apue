LIB = ../../lib/error.o ../fdutil/*.o
CFLAGS = -Wall -I../../include -DMACOS -D_DARWIN_C_SOURCE

PROGS = opencli

all: $(PROGS)

opencli: main.o csopen.o $(LIB)
	$(CC) $(CFLAGS) -o opencli main.o csopen.o $(LIB)
