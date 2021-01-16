LIB = ../../lib
CFLAGS = -Wall -I../../include -DMACOS -D_DARWIN_C_SOURCE

PROGS = recv_fd.o send_fd.o send_err.o writen.o cli_conn.o

all: $(PROGS)

cli_conn.o: cli_conn.c

recv_fd.o: recv_fd.c

send_fd.o: send_fd.c

send_err.o: send_err.c

