#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
listint_t *head;
listint_t *node;
head = NULL;
add_nodeint(&head, 0);
add_nodeint(&head, 1);
add_nodeint(&head, 2);
add_nodeint(&head, 3);
add_nodeint(&head, 4);
add_nodeint(&head, 98);
add_nodeint(&head, 402);
add_nodeint(&head, 1024);
print_listint_safe(head);
node = find_listint_loop(head);
if (node != NULL)
{
printf("Loop starts at [%p] %d\n", (void *)node, node->n);
free_listint_safe(&head);
}
else
{
printf("No loop\n");
}
head = NULL;
node = add_nodeint(&head, 0);
add_nodeint(&head, 1);
add_nodeint(&head, 2);
add_nodeint(&head, 3);
add_nodeint(&head, 4);
node->next = add_nodeint(&head, 98);
add_nodeint(&head, 402);
add_nodeint(&head, 1024);
print_listint_safe(head);
node = find_listint_loop(head);
if (node != NULL)
{
printf("Loop starts at [%p] %d\n", (void *)node, node->n);
free_listint_safe(&head);
}
else
{
printf("No loop\n");
}
return (0);
}
