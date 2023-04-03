#include <stdio.h>
#include "main.h"

/**
 * print_buffer - prints the content of a buffer
 * @b: the buffer to print
 * @size: the number of bytes to print
 */
void print_buffer(char *b, int size)
{
    int i, j;

    if (size <= 0)
        printf("\n");

    for (i = 0; i < size; i += 10)
    {
        printf("%08x: ", i);

        for (j = 0; j < 10; j++)
        {
            if (i + j < size)
                printf("%02x", b[i + j]);
            else
                printf("  ");

            if (j % 2 == 1)
                printf(" ");

            if (j == 9)
                printf(" ");

            if (i + j < size)
            {
                if (b[i + j] >= ' ' && b[i + j] <= '~')
                    printf("%c", b[i + j]);
                else
                    printf(".");
            }
        }

        printf("\n");
    }
}
