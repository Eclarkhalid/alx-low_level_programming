#include "main.h"
/**
 * factorial - Calculates the factorial of a number.
 *
 * @n: The number to calculate the factorial of.
 *
 * Return: The factorial of n. If n is less than 0, return -1.
 */
int factorial(int n)
{
if (n < 0)
return (-1);
if (n == 0)
return (1);
return (n * factorial(n - 1));
}
