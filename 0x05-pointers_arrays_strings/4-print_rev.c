#include "main.h"
/**
 * print_rev - prints a string in reverse to stdout
 * @s: the string to be printed
 *
 * Return: void
 */
void print_rev(char *s)
{
int len = 0;
char *t = s;
while (*t != '\0')
{
len++;
t++;
}
while (len > 0)
{
_putchar(s[len - 1]);
len--;
}
_putchar('\n');
}
