#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
int main(void)
{
listint_t *head;
int sum;
head = NULL;
sum = sum_listint(head);
printf("sum = %d\n", sum);
free_listint2(&head);
return (0);
}
