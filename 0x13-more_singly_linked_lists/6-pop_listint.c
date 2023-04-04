#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - that deletes the head node of a listint_t linked list
 * @head: head of a double pointer
 *Return: 0
 */
int pop_listint(listint_t **head)
{
listint_t *start;
int n;

if (head == NULL || *head == NULL)
return (0);
start = *head;
*head = start->next;
n = start->n;
free(start);
return (n);
}
