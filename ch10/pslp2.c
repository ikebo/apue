#include <setjmp.h>
#include <signal.h>
#include <unistd.h>
#include <stdio.h>

static jmp_buf env_alrm;

static void sig_alrm(int signo) {
    longjmp(env_alrm, 1);
}

unsigned int sleep2(unsigned int secs) {
    if (signal(SIGALRM, sig_alrm) == SIG_ERR) {
        return (secs);
    }
    if (setjmp(env_alrm) == 0) {
        alarm(secs);
        pause();
    }
    return (alarm(0));
}

// int main(void) {
//     setbuf(stdout, NULL);
//     printf("before\n");
//     sleep2(2);
//     printf("after");
//     return 0;
// }