#include "lists.h"
/**
 * print_listint_safe - prints a listint_t linked list, safely
 * @head: pointer to the head of the list
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
const listint_t *temp = head;
size_t count = 0;
const void *addresses[1024];
while (temp != NULL)
{
size_t i;
for (i = 0; i < count; i++)
{
if (temp == addresses[i])
{
printf("-> [%p] %d\n", (void *)temp, temp->n);
return (count);
}
}
if (count == sizeof(addresses) / sizeof(void *))
{
printf("-> [%p] %d\n", (void *)temp, temp->n);
exit(98);
}
addresses[count] = temp;
count++;
printf("[%p] %d\n", (void *)temp, temp->n);
temp = temp->next;
}
return (count);
}
