#include "apue.h"
#include <fcntl.h>
#include <sys/mman.h>

#define NLOOPS 1000
#define SIZE sizeof(long)  // size of shared memory area


static int update(long *ptr) {
    return ((*ptr)++);
}

int main(void) {
    int fd, i, counter;
    pid_t pid;
    void *area;

    if ((fd = open("/dev/zero", O_RDWR)) < 0) {
        err_sys("open error");
    }
    if ((area = mmap(0, SIZE, PROT_READ | PROT_WRITE, MAP_SHARED, fd, 0)) == MAP_SHARED) {
        err_sys("mmap error");
    }
    close(fd); // can close /dev/zero now that it's mapped

    TELL_WAIT();
    pid = fork();
    if (pid > 0) {
        for (i = 0; i < NLOOPS; i += 2) {
            if ((counter = update((long *)area)) != i) {
                err_quit("parent: expected %d, got %d", i, counter);
            }
            TELL_CHILD(pid);
            WAIT_CHILD();
        }
    } else {
        for (i = 1; i < NLOOPS + 1; i += 2) {
            WAIT_PARENT();

            if ((counter = update((long *)area)) != i) {
                err_quit("child: expected %d, got %d", i, counter);
            }
            TELL_PARENT(getppid());
        }
    }
    exit(0);
}