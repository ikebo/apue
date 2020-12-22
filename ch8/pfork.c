#include "apue.h"

int globvar = 6; // external variable in initialized data
char buf[] = "a write to stdout\n";

// Copy on write.   父子进程的变量在试图写时会复制一份副本，将变量隔离
int main(void) {
    int var;
    pid_t pid;

    var = 88;
    if (write(STDOUT_FILENO, buf, sizeof(buf) - 1) != sizeof(buf) - 1) {
        err_sys("write error");
    }
    printf("before fork\n");
    if ((pid = fork()) < 0) {
        err_sys("fork error");
    } else if (pid == 0) {
        globvar++;
        var++;
    } else {
        sleep(2);
    }
    
    printf("pid = %ld, glob = %d, var = %d\n", (long)getpid(), globvar, var);
    exit(0);
}