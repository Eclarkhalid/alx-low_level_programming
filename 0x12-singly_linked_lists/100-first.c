#include <stdio.h>
/**
 * myStartupFun - prints a message before main function is executed
 */
void myStartupFun(void) __attribute__ ((constructor));
void myStartupFun(void)
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}
