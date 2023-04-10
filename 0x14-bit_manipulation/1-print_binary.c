#include "main.h"
/**
 * _power - to calculate base and power
 * @base: base
 * @pow: power
 * Return: the value of base and power
 */
unsigned long int _power(unsigned int base, unsigned int pow)
{
unsigned long int number;
unsigned int i;

number = 1;
for (i = 1; i <= pow; i++)
number *= base;
return (number);
}

/**
 * print_binary - to prints the binary representation of a number
 * @n: number
 * Return: 0
 */
void print_binary(unsigned long int n)
{
unsigned long int rep, result;
char flag;

flag = 0;
rep = _power(2, sizeof(unsigned long int) * 8 - 1);

while (rep != 0)
{
result = n & rep;
if (result == rep)
{
flag = 1;
_putchar('1');
}
else if (flag == 1 || rep == 1)
{
_putchar('0');
}
rep >>= 1;
}
}
