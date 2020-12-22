#include "apue.h"
#include <dirent.h>
#include <limits.h>

/* function type that is called for each filename */
typedef int Myfunc(const char *, const struct stat *, int);

static Myfunc myfunc;
static int myftw(char *, Myfunc *);
static int dopath(Myfunc *);
static long nreg, ndir, nblk, nchr, nfifo, nslink, nsock, ntot;

int main(int argc, char *argv[]) {
    int ret;
    if (argc != 2) {
        err_quit("usage: ftw <starting-pathname>");
    }
    ret = myftw(argv[1], myfunc);
    ntot = nreg + ndir + nblk + nchr + nfifo + nslink + nsock;
    if (ntot == 0) {
        ntot = 1;
    }
    printf("regular files = %7ld, %5.2f %%\n", nreg, nreg*100.0 / ntot);
    printf("directories = %7ld, %5.2f %%\n", ndir, ndir*100.0 / ntot);
    printf("block special = %7ld, %5.2f %%\n", nblk, nblk*100.0 / ntot);
    printf("nchr files = %7ld, %5.2f %%\n", nchr, nchr*100.0 / ntot);
    printf("nfifo files = %7ld, %5.2f %%\n", nfifo, nfifo*100.0 / ntot);
    printf("nslink files = %7ld, %5.2f %%\n", nslink, nslink*100.0 / ntot);
    exit(0);
}

#define FTW_F 1
#define FTW_D 2
#define FTW_DNR 3
#define FTW_NS 4

static char *fullpath;
static size_t pathlen;

static int myftw(char *pathname, Myfunc *func) {
    fullpath = path_alloc(&pathlen);
    if (pathlen <= strlen(pathname))
}

