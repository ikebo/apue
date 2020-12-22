ROOT=..
INC=-I$(ROOT)/include
APUELIB=$(ROOT)/lib/error.o
CFLAGS=-Wall $(INC)

PROGS=ptmode faccess pumask pchmod punlink putimes

all: $(PROGS)

pdev: p_dev.o $(APUELIB)
p_dev.o: p_dev.c

# pcwd: pcwd.o $(APUELIB)
# pcwd.o: pcwd.c

putimes: putimes.o $(APUELIB)
putimes.o: putimes.c

punlink: punlink.o $(APUELIB)
punlink.o: punlink.c

ptmode: ptmode.o $(APUELIB)
ptmode.o: ptmode.c

faccess: faccess.o $(APUELIB)
faccess.o: faccess.c

pumask: pumask.o $(APUELIB)
pumask.o: pumask.c

pchmod: pchmod.o $(APUELIB)
pchmod.o: pchmod.c

$(APUELIB):
	(cd $(ROOT) && $(MAKE))