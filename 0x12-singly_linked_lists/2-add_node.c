#include "lists.h"
#include <string.h>
/**
 * add_node - Adds a new node at the beginning of a list_t list
 * @head: Pointer to the pointer to the head node
 * @str: The string to be duplicated and added to the new node
 *
 * Return: The address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *new_node;
char *dup_str;
unsigned int len = 0;
while (str[len])
len++;
dup_str = strdup(str);
if (dup_str == NULL)
return (NULL);
new_node = malloc(sizeof(list_t));
if (new_node == NULL)
{
free(dup_str);
return (NULL);
}
new_node->str = dup_str;
new_node->len = len;
new_node->next = *head;
*head = new_node;
return (new_node);
}
