ROOT=..
CFLAGS=-Wall -I$(ROOT)/include
APUELIB=$(ROOT)/lib/error.o

all: psignal palarm pslp1 pslp2x parmread parmreadjmp psig psigjmp psigsuspend \
	psigsuspend1 psystem

psystem: psystem.o $(APUELIB)
psystem.o: psystem.c

psigsuspend1: psigsuspend1.o $(APUELIB)
psigsuspend1.o: psigsuspend1.c

psigsuspend: psigsuspend.o pr_mask.o $(APUELIB)
psigsuspend.o: psigsuspend.c

psigjmp: psigjmp.o pr_mask.o $(APUELIB)
psigjmp.o: psigjmp.c

pr_mask.o: pr_mask.c

psig: psig.o $(APUELIB)
psig.o: psig.c

parmreadjmp: parmreadjmp.o $(APUELIB)
parmreadjmp.o: parmreadjmp.c

parmread: parmread.o $(APUELIB)
parmread.o: parmread.c

pslp2x: pslp2x.o pslp2.o $(APUELIB)
pslp2x.o: pslp2x.c

pslp2: pslp2.o $(APUELIB)
pslp2.o: pslp2.c

pslp1: pslp1.o $(APUELIB)
pslp1.o: pslp1.c

palarm: palarm.o $(APUELIB)
palarm.o: palarm.c

psignal: psignal.o $(APUELIB)
psignal.o: psignal.c

$(APUELIB):
	(cd $(ROOT)/lib && $(MAKE))