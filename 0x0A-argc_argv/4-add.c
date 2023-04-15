#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/**
 * main - Entry point
 * @argc: Number of command line arguments
 * @argv: Array of command line arguments
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
int sum = 0;
int i, j;
if (argc == 1)
{
printf("0\n");
return (0);
}
for (i = 1; i < argc; i++)
{
int num = 0;
int len = strlen(argv[i]);
for (j = 0; j < len; j++)
{
if (!isdigit(argv[i][j]))
{
printf("Error\n");
return (1);
}
}
num = atoi(argv[i]);
sum += num;
}
printf("%d\n", sum);
return (0);
}
