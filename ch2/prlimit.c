#include "apue.h"
#include <errno.h>
#include <limits.h>

static void pr_sysconf(char *, int);
static void pr_pathconf(char *, char *, int);

int
main(int argc, char *argv[]) {
    if (argc != 2) {
        err_quit("usage: a.out <dirname>");
    }

    #ifdef ARG_MAX
        printf("ARG_MAX defined to be %ld\n", (long)ARG_MAX+0);
    #else
        printf("no symbol for ARG_MAX\n");
    #endif
}