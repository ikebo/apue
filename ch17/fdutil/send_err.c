#include "apue.h"

int send_fd(int fd, int fd_to_send);
int send_err(int fd, int status, const char *errmsg);
int recv_fd(int fd, ssize_t (*userfunc)(int , const void *, size_t));


/**
 * Used when we had planned to send an fd using send_fd(),
 * but encountered an error instead. We send the error back
 * using the send_fd()/recv_fd() protocol.
 */ 
int send_err(int fd, int errcode, const char *msg) {
    int n;
    if ((n = strlen(msg)) > 0) {
        if (writen(fd, msg, n) != n) {
            return (-1);
        }
    }

    if (errcode >= 0) {
        errcode = -1; // must be negative
    }

    if (send_fd(fd, errcode) < 0) {
        return (-1);
    }
    return (0);
}