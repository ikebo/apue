LIB = ../lib/error.o
CFLAGS = -Wall -I../include

PROGS = pthread_sig pthread_atfork

all: $(PROGS)

pthread_sig: pthread_sig.o $(LIB)
pthread_sig.o: pthread_sig.c

pthread_atfork: pthread_atfork.o $(LIB)
pthread_atfork.o: pthread_atfork.c

$(LIB):
	((cd ../lib) && $(MAKE))
