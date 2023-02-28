#include "main.h"
/**
 * _puts - to print a string followed by newline
 * @str: check for this char
 * Return: lenght of string
 */
void _puts(char *str)
{
int a = 0;
while (str[a] != '\0')
{
_putchar(str[a]);
a++;
}
_putchar('\n');
}
