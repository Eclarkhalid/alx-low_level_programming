#include "main.h"
/**
 * wildcmp - Compares two strings and returns 1 if the strings can be
 *           considered identical, otherwise return 0. s2 can contain the
 *           special character *. The special char * can replace any string
 *           (including an empty string)
 *
 * @s1: The first string to compare
 * @s2: The second string to compare (can contain * as wildcard)
 *
 * Return: 1 if the strings are identical, 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
if (*s1 == '\0' && *s2 == '\0')
return (1);
if (*s1 == *s2)
return (wildcmp(s1 + 1, s2 + 1));
if (*s2 == '*')
{
if (*s1 == '\0')
return (wildcmp(s1, s2 + 1));
if (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1))
return (1);
}
return (0);
}
