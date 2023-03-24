#include <stdio.h>
/**
 * main - finds and prints the largest prime factor of the number 612852475143
 *
 * Return: Always 0
 */
int main(void)
{
long int n = 612852475143;
long int i;
for (i = 2; i <= n; i++)
{
if (n % i == 0)
{
n /= i;
i--;
}
}
printf("%ld\n", i);
return (0);
}
