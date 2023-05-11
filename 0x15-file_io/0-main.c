#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - Entry point
 *
 * @argc: Number of arguments passed to the program
 * @argv: Array of pointers to the argument strings
 *
 * Return: EXIT_SUCCESS on success, otherwise EXIT_FAILURE
 */
int main(int argc, char **argv)
{
ssize_t n;
if (argc != 2)
{
fprintf(stderr, "Usage: %s <filename>\n", argv[0]);
return (EXIT_FAILURE);
}
n = read_textfile(argv[1], 114);
printf("\n(printed chars: %li)\n", n);
n = read_textfile(argv[1], 1024);
printf("\n(printed chars: %li)\n", n);
return (EXIT_SUCCESS);
}
