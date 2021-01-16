ROOT = ..
PLATFORM = $(shell $(ROOT)/systype.sh)
include $(ROOT)/Make.defines.$(PLATFORM)

LIBMISC = libapue.a
OBJS   = bufargs.o cliconn.o clrfl.o \
			daemonize.o error.o errorlog.o lockreg.o locktest.o \
			openmax.o pathalloc.o popen.o prexit.o prmask.o \
			ptyfork.o ptyopen.o readn.o recvfd.o senderr.o sendfd.o \
			servaccept.o servlisten.o setfd.o setfl.o signal.o signalintr.o \
			sleepus.o spipe.o tellwait.o ttymodes.o writen.o

all: $(LIBMISC) 

$(LIBMISC): $(OBJS)
	$(AR) rv $(LIBMISC) $?
	$(RANLIB) $(LIBMISC)

clean:
	rm -f *.o a.out core temp.* $(LIBMISC)

include $(ROOT)/Make.libapue.inc

# INC=-I../include # no need
# # VPATH = ../include

# PROGS: error.o signal.o clrfl.o setfl.o ptell.o lockreg.o setfd.o spipe.o

# all: $(PROGS)

# spipe.o: spipe.c
# 	clang -Wall $(INC) -c spipe.c

# lockreg.o: lockreg.c
# 	clang -Wall $(INC) -c lockreg.c

# setfd.o: setfd.c
# 	clang -Wall $(INC) -c setfd.c

# ptell.o: ptell.c
# 	clang -Wall $(INC) -c ptell.c

# setfl.o: setfl.c
# 	clang -Wall $(INC) -c setfl.c

# clrfl.o: clrfl.c
# 	clang -Wall $(INC) -c clrfl.c

# error.o: error.c
# 	clang -Wall $(INC) -c error.c

# signal.o: signal.c
# 	clang -Wall $(INC) -c signal.c

# clean:
# 	rm -f error.o signal.o clrfl.o