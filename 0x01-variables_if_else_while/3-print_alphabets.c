#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char c = 'a';
int i;
for (i = 0; i < 26; i++)
{
putchar(c);
c++;
}
c = 'A';
for (i = 0; i < 26; i++)
{
putchar(c);
c++;
}
putchar('\n');
return (0);
}
