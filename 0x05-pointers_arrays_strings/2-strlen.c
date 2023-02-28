#include "main.h"
/**
 * _strlen - to return the lenght of a string
 * @s: check for this char
 * Return: 0
 */
int _strlen(char *s)
{
/* start the counter from zero */
int a = 0;
for (; *s++;)
	a++;
return (a);
}
