#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success, otherwise 1
 */
int main(int argc, char **argv)
{
int res;
if (argc != 3)
{
fprintf(stderr, "Usage: %s filename text\n", argv[0]);
exit(EXIT_FAILURE);
}
res = create_file(argv[1], argv[2]);
printf("-> %i\n", res);
return (EXIT_SUCCESS);
}
