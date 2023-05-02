#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array of strings containing the command-line arguments
 *
 * Return: 0 on success, 98 on error
 */
int main(int argc, char *argv[])
{
if (argc != 3)
{
printf("Error\n");
return (98);
}
char *num1 = argv[1];
char *num2 = argv[2];
if (!is_valid_number(num1) || !is_valid_number(num2))
{
printf("Error\n");
return (98);
}
char *result = multiply_numbers(num1, num2);
printf("%s\n", result);
free(result);
return (0);
}
