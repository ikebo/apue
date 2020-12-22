// 接收一个int, 和 一个函数(接收int, 返回void)指针， 返回一个函数(接收一个int, 返回void)指针
void (*signal(int sig, void (*func)(int)))(int);

// 相当于:
typedef void (*sighandler_t)(int);

sighandler_t signal(int sig, sighandler_t func);