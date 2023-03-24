#include "main.h"
/**
 * print_number - prints an integer using only _putchar
 * @n: integer to print
 *
 * Return: void
 */
void print_number(int n)
{
int power = 1;
int neg_flag = 0;
if (n < 0)
{
_putchar('-');
n *= -1;
neg_flag = 1;
}
while (power <= n / 10)
power *= 10;
while (power >= 1)
{
int digit = n / power;
_putchar(digit + '0');
n -= digit * power;
power /= 10;
}
if (neg_flag == 1 && n == 0)
_putchar('0');
}
