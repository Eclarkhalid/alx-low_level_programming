#include "main.h"
/**
 * rot13 - Encodes a string using ROT13 encryption.
 * @s: The string to be encoded.
 *
 * Return: A pointer to the encoded string.
 */
char *rot13(char *s)
{
char *start = s;
char *src = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char *dest = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
int i, j;
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; src[j] != '\0'; j++)
{
if (s[i] == src[j])
{
s[i] = dest[j];
break;
}
}
}
return (start);
}
