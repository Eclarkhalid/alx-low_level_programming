#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
int main(void)
{
listint_t *head = NULL;
listint_t *node;
int index = 3;
add_nodeint_end(&head, 1);
add_nodeint_end(&head, 2);
add_nodeint_end(&head, 3);
add_nodeint_end(&head, 4);
add_nodeint_end(&head, 5);
node = get_nodeint_at_index(head, index);
if (node != NULL)
{
printf("The value of the node at index %d is: %d\n", index, node->n);
}
else
{
printf("The node at index %d does not exist\n", index);
}
free_listint(head);
return (0);
}
