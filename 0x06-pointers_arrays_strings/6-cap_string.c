#include "main.h"
/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to be capitalized.
 *
 * Return: The capitalized string.
 */
char *cap_string(char *str)
{
int i = 0;
while (str[i])
{
if (i == 0 || str[i - 1] == ' ' || str[i - 1] == '\t' ||
str[i - 1] == '\n' || str[i - 1] == ',' ||
str[i - 1] == ';' || str[i - 1] == '.' ||
str[i - 1] == '!' || str[i - 1] == '?' ||
str[i - 1] == '"' || str[i - 1] == '(' ||
str[i - 1] == ')' || str[i - 1] == '{' ||
str[i - 1] == '}')
str[i] = str[i] >= 'a' && str[i] <= 'z' ?
str[i] - 32 : str[i];
i++;
}
return (str);
}
