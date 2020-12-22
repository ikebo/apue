#include <signal.h>
#include <unistd.h>
#include <stdio.h>

static void sig_alrm(int signo) {

}

unsigned int sleep1(unsigned int secs) {
    if (signal(SIGALRM, sig_alrm) == SIG_ERR) {
        return(secs);
    }
    alarm(secs);
    pause();
    return(alarm(0));
}

int main(void) {
    setbuf(stdout, NULL);
    printf("before slp");
    sleep1(2);
    printf("slp done");
}