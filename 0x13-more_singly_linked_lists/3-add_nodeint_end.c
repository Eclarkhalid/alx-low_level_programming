#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: pointer to pointer to the head node of the list
 * @n: value to set in the new node
 *
 * Return: address of the new node or NULL on failure
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new_node, *temp;
if (!head)
return (NULL);
new_node = malloc(sizeof(listint_t));
if (!new_node)
return (NULL);
new_node->n = n;
new_node->next = NULL;
if (!*head)
*head = new_node;
else
{
temp = *head;
while (temp->next)
temp = temp->next;
temp->next = new_node;
}
return (new_node);
}
