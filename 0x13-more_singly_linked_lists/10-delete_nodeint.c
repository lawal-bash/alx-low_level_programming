#include "lists.h"

/**
 * reverse_listint - that deletes the node at index of a listint_t linked list
 * @head: head with double pointer
 * Return: 1 if it succeeded, -1 if it failed
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *previous, *next;

if (head == NULL || *head == NULL)
return (NULL);
if ((*head)->next == NULL)
return (*head);
previous = NULL;
while (*head != NULL)
{
next = (*head)->next;
(*head)->next = previous;
previous = *head;
*head = next;
}
*head = previous;
return (*head);
}
