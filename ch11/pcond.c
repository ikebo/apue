#include <pthread.h>

struct msg {
    struct msg *m_next;
};

struct msg *workq;

pthread_cond_t qready = PTHREAD_COND_INITIALIZER;
pthread_mutex_t qlock = PTHREAD_MUTEX_INITIALIZER;

void process_msg(void) {
    struct msg *mp;

    for (;;) {
        pthread_mutex_lock(&qlock);
        while (workq == NULL) {
            // 函数自动把调用线程放到等待条件的线程列表上, 对互斥量解锁，函数返回时，互斥量再次被锁住
            pthread_cond_wait(&qready, &qlock);
        }
        mp = workq;
        workq = mp->m_next;
        pthread_mutex_unlock(&qlock);
    }
}

void enqueue_msg(struct msg *mp) {
    pthread_mutex_lock(&qlock);
    mp->m_next = workq;
    workq = mp;
    pthread_mutex_unlock(&qlock);
    pthread_cond_signal(&qready);
}
