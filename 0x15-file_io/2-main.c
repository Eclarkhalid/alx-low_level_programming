#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - Entry point
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: 0 on success, 1 on failure
 */
int main(int argc, char **argv)
{
int res;
if (argc != 3)
{
fprintf(stderr, "Usage: %s filename text\n", argv[0]);
return (1);
}
res = append_text_to_file(argv[1], argv[2]);
printf("-> %i\n", res);
return (0);
}
