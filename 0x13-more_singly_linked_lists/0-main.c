#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * main - check the code for printing all the elements of a listint_t list
 *
 * Return: Always 0.
 */
int main(void)
{
listint_t *head = NULL;
listint_t *new_node = NULL;
size_t node_count = 0;
new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
{
printf("Failed to allocate memory for new node.\n");
return (EXIT_FAILURE);
}
new_node->n = 0;
new_node->next = NULL;
head = new_node;
new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
{
printf("Failed to allocate memory for new node.\n");
return (EXIT_FAILURE);
}
new_node->n = 1;
new_node->next = head;
head = new_node;
new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
{
printf("Failed to allocate memory for new node.\n");
return (EXIT_FAILURE);
}
new_node->n = 2;
new_node->next = head;
head = new_node;
node_count = print_listint(head);
printf("Number of nodes in list: %lu\n", node_count);
while (head != NULL)
{
new_node = head->next;
free(head);
head = new_node;
}
return (EXIT_SUCCESS);
}
