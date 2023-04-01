#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_list - the memory allocated for a list
 *
 * @head: pointer to the first node of the list to free
 */
void free_list(list_t *head)
{
if (head)
{
free_list(head->next);
if (head->str)
free(head->str);
free(head);
}
}

#include<stdio.h>
/**
 * myFun - the constructor attribute to myStartupFun() so that it
 *   is executed before main()
 */
void myFun(void) __attribute__ ((constructor));

/**
 * myFun - implementation of myStartupFun
 */
void myFun(void)
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}
