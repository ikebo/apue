ROOT = ../../
PLATFORM = $(shell $(ROOT)/systype.sh)
include $(ROOT)/Make.defines.$(PLATFORM)

ifeq "$(PLATFORM)" "solaris"
	EXTRALIBS=-lsocket -lnsl
endif

PROGS = opend.poll opend.select

all: $(PROGS)

opend.poll: main.o request.o cliargs.o client.o loop_poll.o $(LIBAPUE)
	$(CC) $(CFLAGS) -o opend.poll main.o request.o cliargs.o client.o loop_poll.o \
		$(LDFLAGS) $(LDLIBS)

opend.select: main.o request.o cliargs.o client.o loop_select.o $(LIBAPUE)
	$(CC) $(CFLAGS) -o opend.select main.o request.o cliargs.o client.o loop_select.o \
		$(LDFLAGS) $(LDLIBS)

clean:
	rm -f $(PROGS) $(TEMPFILES) *.o

include $(ROOT)/Make.libapue.inc