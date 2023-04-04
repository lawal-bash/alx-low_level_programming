#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - to frees a listint_t list
 * @head: head
 * Return: address of new elements, Null if it failed
 */
void free_listint(listint_t *head)
{
listint_t *next;

while (head != NULL)
{
next = head->next;
free(head);
head = next;
}
}
