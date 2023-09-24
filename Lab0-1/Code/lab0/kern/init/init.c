#include <stdio.h>
#include <string.h>
#include <sbi.h>
int kern_init(void) __attribute__((noreturn));

int kern_init(void) {
    extern char edata[], end[];
    memset(edata, 0, end - edata);

    /*const char *message = "(THU.CST) os is loading ...\n";*/
    const char *message = "(NKU.CST) os is loading ...\n Nothing will happen.";
    cprintf("%s\n\n", message);
   while (1)
        ;
}
