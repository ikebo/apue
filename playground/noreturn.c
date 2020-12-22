// void overflow(void) __attribute__((noreturn));
// int negate(int x) 
// {
//     if (x == 0x80000000) overflow();
//     return -x;
// }
// void overflow(void) {
//     __asm {
//         "SVC 0x123;"  //hypothetical exception-throwing system service
//     }
//     while(1) ;
// }

