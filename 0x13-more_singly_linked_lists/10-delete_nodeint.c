#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index of a linked list
 * @head: head of the linked list
 * @index: index of the node to delete
 *
 * Return: 1 if successful, -1 otherwise
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
unsigned int i;
listint_t *tmp, *prev;
if (head == NULL || *head == NULL)
return (-1);
tmp = *head;
prev = NULL;
for (i = 0; tmp != NULL && i < index; i++)
{
prev = tmp;
tmp = tmp->next;
}
if (tmp == NULL)
return (-1);
if (prev == NULL)
*head = tmp->next;
else
prev->next = tmp->next;
free(tmp);
return (1);
}
