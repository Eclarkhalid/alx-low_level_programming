#include "lists.h"
/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list.
 * @head: Pointer to the head of the list.
 * @index: Index of the node starting from 0.
 *
 * Return: Pointer to the nth node of the list, or NULL if it doesn't exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *node;
unsigned int i;
node = head;
for (i = 0; i < index && node != NULL; i++)
node = node->next;
if (i == index)
return (node);
return (NULL);
}
