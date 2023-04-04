#include "lists.h"

/**
 * get_nodeint_at_index - that return nth node of a listint_t linked list
 * @head: pointing to the first node
 * @index: index of the node
 * Return: pointer to the Index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i;
if (head == NULL)
return (NULL);
for (i = 0; i < index; i++)
{
head = head->next;
if (head == NULL)
return (NULL);
}
return (head);
}
