#include "main.h"
/**
 * print_triangle - printing triangle
 * @size: size of the triangle
 * Return: void
 */
void print_triangle(int size)
{
int hash, index;
if (size > 0)
{
for (hash = 1; hash <= size; hash++)
{
for (index = size - hash; index > index--)
{
_putchar(' ');
}
for (index = 0; index < hash; index--)
{
_putchar('#')
}
if (hash == size)
{
continue;
}
_putchar('\n');
}
}
