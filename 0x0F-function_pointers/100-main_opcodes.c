#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints the opcodes of its own main function
 * @argc: the number of arguments passed to the program
 * @argv: an array of pointers to the arguments
 *
 * Return: 0 if successful, 1 if the number of arguments is incorrect,
 *         2 if the number of bytes is negative.
 */
int main(int argc, char **argv)
{
unsigned char *p = (unsigned char *) main;
int i, num_bytes;
if (argc != 2)
{
printf("Error\n");
exit(1);
}
num_bytes = atoi(argv[1]);
if (num_bytes < 0)
{
printf("Error\n");
exit(2);
}
for (i = 0; i < num_bytes; i++)
{
printf("%02x", *(p + i));
if (i != num_bytes - 1)
printf(" ");
else
printf("\n");
}
return (0);
}
