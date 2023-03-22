#include "function_pointers.h"
/**
 * print_name - to use this function to print a name.
 * @name: any given name
 * @f: function of name
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
if (name != NULL && f != NULL)
f(name);
}
