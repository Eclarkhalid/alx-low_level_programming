#include "main.h"
#include <string.h>
/**
 * string_nconcat - Concatenates two strings up to n bytes
 * @s1: First string to be concatenated
 * @s2: Second string to be concatenated
 * @n: Maximum number of bytes of s2 to concatenate to s1
 *
 * Return: Pointer to newly allocated space in memory with concatenated string,
 * or NULL if allocation fails
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *concat;
unsigned int s1_len = 0, s2_len = 0, i, j;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1[s1_len] != '\0')
s1_len++;
while (s2[s2_len] != '\0')
s2_len++;
if (n >= s2_len)
n = s2_len;
concat = malloc(sizeof(char) * (s1_len + n + 1));
if (concat == NULL)
return (NULL);
for (i = 0; i < s1_len; i++)
concat[i] = s1[i];
for (j = 0; j < n; j++)
concat[i + j] = s2[j];
concat[i + j] = '\0';
return (concat);
}
