#include "apue.h"
#include "self.h"

static void sig_int(int);

int main(void) {
    unsigned int unslept;
    if (signal(SIGINT, sig_int) == SIG_ERR) {
        err_sys("signal(SIGINT) error");
    }
    unslept = sleep2(3);
    printf("sleep2 returned: %u\n", unslept);
}

static void sig_int(int signo) {
    int i, j;
    volatile int k;
    printf("\nsig_int starting\n");
    for (i = 0; i < 300000; i++) {
        for (j = 0; j < 400000; j++) {
            k += i * j;
        }
    }
    printf("sig_int finished\n");
}