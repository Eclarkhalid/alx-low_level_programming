#include <stddef.h>
#include <stdlib.h>
/**
 * argstostr - Concatenates all the arguments of the program.
 * @ac: Number of arguments.
 * @av: Array of argument strings.
 *
 * Return: Pointer to a new string containing concatenated arguments,
 *         separated by newlines, or NULL if it fails.
 */
char *argstostr(int ac, char **av)
{
char *str;
int i, j, k, len;
if (ac == 0 || av == NULL)
return (NULL);
for (i = 0, len = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
len++;
len++;
}
str = malloc((len + 1) * sizeof(char));
if (str == NULL)
return (NULL);
for (i = 0, k = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++, k++)
str[k] = av[i][j];
str[k++] = '\n';
}
str[k] = '\0';
return (str);
}
