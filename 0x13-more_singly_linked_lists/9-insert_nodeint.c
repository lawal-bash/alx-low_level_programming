#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - to inserts a new node at a given position
 * @head: head of a double pointer
 * @idx: node point were index is added
 * @n: new node value
 * Return: address of new elements, Null if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int i;
listint_t *temp, *new;

if (head == NULL)
return (NULL);
else if (idx != 0)
{
temp = *head;
for (i = 0; i < idx - 1 && temp != NULL; i++)
{
temp = temp->next;
}
if (temp == NULL)
return (NULL);
}
new = malloc(sizeof(listint_t));
if (new == NULL)
return (NULL);
new->n = n;
if (idx == 0)
{
new->next = *head;
*head = new;
return (new);
}
new->next = temp->next;
temp->next = new;
return (new);
}
