#include "main.h"
/**
 * print_to_98 - Prints all natural numbers to 98 seperated by comma and space
 * @n: number to start counting from
 */
void print_to_98(int n)
{
if (n >= 98)
{
while (n > 98)
_putchar("%d, ", n--);
_putchar("%d\n", n);
}
else
{
while (n < 98)
_putchar("%d, ", n++);
_putchar("%d\n", n);
}
}
