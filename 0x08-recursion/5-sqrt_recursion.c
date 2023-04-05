#include "main.h"
/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: Input number
 *
 * Return: Square root of the number or -1 if n doesn't have a natural
 *         square root
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
if (n == 0 || n == 1)
return (n);
return (square_root(n, 1));
}
/**
 * square_root - Finds the square root of a number
 * @n: Input number
 * @i: Root candidate
 *
 * Return: Square root of the number or -1 if n doesn't have a natural
 *         square root
 */
int square_root(int n, int i)
{
if (i * i == n)
return (i);
if (i * i > n)
return (-1);
return (square_root(n, i + 1));
}
