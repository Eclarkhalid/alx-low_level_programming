#include <stdio.h>
#include "lists.h"
int main(void)
{
listint_t *head = NULL;
int n;
add_nodeint_end(&head, 1);
add_nodeint_end(&head, 2);
add_nodeint_end(&head, 3);
add_nodeint_end(&head, 4);
add_nodeint_end(&head, 5);
print_listint(head);
n = pop_listint(&head);
printf("popped: %d\n", n);
print_listint(head);
n = pop_listint(&head);
printf("popped: %d\n", n);
print_listint(head);
free_listint(head);
return 0;
}
