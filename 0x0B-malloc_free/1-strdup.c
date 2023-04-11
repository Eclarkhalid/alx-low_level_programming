#include <stdlib.h>
/**
 * _strdup - Duplicate a string in newly allocated memory.
 * @str: Pointer to the string to be duplicated.
 *
 * Return: Pointer to the newly allocated memory containing the duplicated
 *         string, or NULL if str is NULL or if memory allocation fails.
 */
char *_strdup(char *str)
{
char *dup_str;
int i, len = 0;
if (str == NULL)
return (NULL);
while (str[len] != '\0')
len++;
dup_str = (char *)malloc((len + 1) * sizeof(char));
if (dup_str == NULL)
{
return (NULL);
}
for (i = 0; i <= len; i++)
dup_str[i] = str[i];
return (dup_str);
}
