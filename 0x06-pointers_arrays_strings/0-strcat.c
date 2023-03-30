#include "main.h"
#include <stdio.h>
/**
 * _strcat - concatenates two strings
 * @dest: destination string to append to
 * @src: source string to append from
 *
 * Return: pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
char *dest_end = dest;
while (*dest_end != '\0')
dest_end++;
while (*src != '\0')
{
*dest_end = *src;
dest_end++;
src++;
}
*dest_end = '\0';
return (dest);
}
