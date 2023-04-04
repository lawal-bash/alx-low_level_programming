#include "lists.h"
#include <stdio.h>

/**
 * print_listint - this print all elements of a listint_t list
 *
 * @h: head of linklist node
 *
 * Return: number of nodes
 *
 */
size_t print_listint(const listint_t *h)
{
size_t counter = 0;
while (h != NULL)
{
printf("%d\n", h->n);
h = h->next;
counter++;
}
return (counter);
}
