#ifndef LISTS_H
#define LISTS_H
#include <stdio.h>
#include <stdlib.h>
/* struct definition for linked list node */
typedef struct listint_s
{
int n;
struct listint_s *next;
} listint_t;
/* function prototypes */
listint_t *add_nodeint(listint_t **head, int n);
void free_listint(listint_t *head);
size_t print_listint(const listint_t *h);
#endif /* LISTS_H */
