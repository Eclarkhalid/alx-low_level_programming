#include "lists.h"
/**
 * free_listint_safe - frees a linked list safely
 * @h: pointer to head of list
 *
 * Return: size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
size_t size = 0;
listint_t *current, *next;
if (h == NULL || *h == NULL)
return (size);
current = *h;
*h = NULL;
while (current != NULL)
{
size++;
next = current->next;
free(current);
if (next >= current)
break;
current = next;
}
return (size);
}
