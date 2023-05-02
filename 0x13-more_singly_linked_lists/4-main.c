#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
int main(void)
{
listint_t *head = NULL;
int i;
for (i = 0; i < 10; i++)
add_nodeint_end(&head, i);
printf("Original list:\n");
print_listint(head);
free_listint(head);
head = NULL;
printf("After freeing the list:\n");
print_listint(head);
return (0);
}
