#include "apue.h"

#define MAXARGC 50 // max number of arguments in buf
#define WHITE " \t\n" // white space for tokenizing arguments

int buf_args(char *buf, int (*optfunc)(int, char **)) {
    char *ptr, *argv[MAXARGC];
    int argc;

    if (strtok(buf, WHITE) == NULL)  { // an argv[0] is required
        return (-1);
    }
    argv[argc = 0] = buf;
    while ((ptr = strtok(NULL, WHITE)) != NULL) {
        if (++argc >= MAXARGC-1) {  // -1 for froom for NULL at end
            return (-1);
        }
        argv[argc] = ptr;
    }
    argv[++argc] = NULL;
    return ((*optfunc)(argc, argv));
}