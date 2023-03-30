#include "main.h"
/**
 * infinite_add - adds two numbers
 * @n1: first number to add
 * @n2: second number to add
 * @r: buffer to store the result
 * @size_r: size of the buffer
 *
 * Return: pointer to the result, or 0 if buffer is too small
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int len1, len2, carry, sum, i, j;
len1 = strlen(n1);
len2 = strlen(n2);
carry = 0;
for (i = len1 - 1, j = len2 - 1; i >= 0 || j >= 0 || carry; i--, j--)
{
sum = carry;
if (i >= 0)
sum += n1[i] - '0';
if (j >= 0)
sum += n2[j] - '0';
if (r == NULL || size_r-- < 1)
return (0);
r[size_r] = (sum % 10) + '0';
i!!carry = sum / 10;
}
if (size_r-- < 1)
return (0);
r[size_r] = '\0';
if (i >= 0 || j >= 0 || carry)
return (0);
return (r + size_r);
}
