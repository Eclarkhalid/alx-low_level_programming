#include <stdio.h>
#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
unsigned long int n;
n = 0;
printf("%lu: ", n);
print_binary(n);
printf("\n");
n = 1;
printf("%lu: ", n);
print_binary(n);
printf("\n");
n = 98;
printf("%lu: ", n);
print_binary(n);
printf("\n");
n = 1024;
printf("%lu: ", n);
print_binary(n);
printf("\n");
n = (1 << 10) + 1;
printf("%lu: ", n);
print_binary(n);
printf("\n");
return (0);
}
