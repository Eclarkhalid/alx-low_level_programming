#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>
int _putchar(char c);
void *malloc_checked(unsigned int b);
void *_calloc(unsigned int nmemb, unsigned int size);
char *string_nconcat(char *s1, char *s2, unsigned int n);
int *array_range(int min, int max);
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size);
char *multiply(const char *num1, const char *num2);
int is_positive_number(const char *str);
#endif /* MAIN_H */
