ROOT=..
INC=-I$(ROOT)/include
CFLAGS=-Wall $(INC)
APUELIB=$(ROOT)/lib/error.o

PROGS = pgetc pfgets ptmp ptmpd pmemio

all: $(PROGS)

pmemio: pmemio.o $(APUELIB)
pmemio.o: pmemio.c

ptmpd: ptmpd.o $(APUELIB)
ptmpd.o: ptmpd.c

ptmp: ptmp.o $(APUELIB)
ptmp.o: ptmp.c

pgetc: pgetc.o $(APUELIB)
pgetc.o: pgetc.c

pfgets: pfgets.o $(APUELIB)
pfgets.o: pfgets.c

$(APUELIB):
	(cd $(ROOT)/lib && $(make))