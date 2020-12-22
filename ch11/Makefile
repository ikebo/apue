CFLAGS = -Wall -I../include
APUELIB = ../lib/error.o

PROGS = p_cthrd p_thr_exit pthr_varg pclean pmutextot

all: $(PROGS)

pmutextot: pmutextot.o $(APUELIB)
pmutextot.o: pmutextot.c

pclean: pclean.o $(APUELIB)
pclean.o: pclean.c

pthr_varg: pthr_varg.o $(APUELIB)
pthr_varg.o: pthr_varg.c

p_thr_exit: p_thr_exit.o $(APUELIB)
p_thr_exit.o: p_thr_exit.c

p_cthrd: p_cthrd.o $(APUELIB)
p_cthrd.o: p_cthrd.c

$(APUELIB):
	((cd ../lib) && $(MAKE))