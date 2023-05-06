#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int endianness = get_endianness();
if (endianness == 0)
printf("Big Endian\n");
else
printf("Little Endian\n");
return (0);
}
