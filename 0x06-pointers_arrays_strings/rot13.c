#include "main.h"
/**
 * rot13 - Encode a string using ROT13
 * @s: The string to encode
 *
 * Return: A pointer to the encoded string
 */
char *rot13(char *s)
{
int i, j;
char *p = s;
char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
for (i = 0; s[i] != '\0'; i++)
{
if ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z'))
{
for (j = 0; j < 52; j++)
{
if (s[i] == rot13[j])
{
*p = rot13[j + 13];
break;
}
}
}
else
{
*p = s[i];
}
p++;
}
return (s);
}
