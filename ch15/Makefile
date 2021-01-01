LIB = ../lib/error.o ../lib/ptell.o
CFLAGS = -Wall -I../include

PROGS = tpipe tpage tpopen myuclc filter add2 coro shmem

all: $(PROGS)

shmem: shmem.o $(LIB)
shmem.o: shmem.c

coro: coro.o $(LIB)
coro.o: coro.c

add2: add2.o $(LIB)
add2.o: add2.c

filter: filter.o $(LIB)
filter.o: filter.c

myuclc: myuclc.o $(LIB)
myuclc.o: myuclc.c

tpipe: tpipe.o $(LIB)
tpipe.o: tpipe.c

tpage: tpage.o $(LIB)
tpage.o: tpage.c

tpopen: tpopen.o $(LIB)
tpopen.o: tpopen.c

$(LIB):
	(cd ../lib && $(MAKE))

