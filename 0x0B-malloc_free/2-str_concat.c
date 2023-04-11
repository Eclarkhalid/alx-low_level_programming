#include <stddef.h>
#include <stdlib.h>
/**
 * str_concat - Concatenates two strings.
 * @s1: Pointer to the first string.
 * @s2: Pointer to the second string.
 *
 * Return: Pointer to a newly allocated space in memory containing the
 * concatenated strings, or NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
char *concatenated;
unsigned int i, j, len1, len2;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
len1 = 0;
while (s1[len1] != '\0')
len1++;
len2 = 0;
while (s2[len2] != '\0')
len2++;
concatenated = malloc((len1 + len2 + 1) * sizeof(char));
if (concatenated == NULL)
return (NULL);
for (i = 0; i < len1; i++)
concatenated[i] = s1[i];
for (j = 0; j <= len2; j++)
concatenated[len1 + j] = s2[j];
return (concatenated);
}
