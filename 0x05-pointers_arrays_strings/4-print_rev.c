#include "main.h"
/**
 * print_rev - to print a string in reverse, followed by newline
 * @s: string to print
 */
void print_rev(char *s)
{
int a, b;
b = 0;
while (s[b] != '\0')
b++;
for (a = b - 1; a >= 0; a--)
{
_putchar(s[a]);
}
_putchar('\n');
}
