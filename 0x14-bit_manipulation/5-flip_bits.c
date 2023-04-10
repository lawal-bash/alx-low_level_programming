#include "main.h"

/**
 * flip_bits - numbers of bits needed to flip to get from number to another
 * @n: the first number
 * @m: the second number
 * Return: the number of bits needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int dif, result;
unsigned int j, i;
j = 0;
result = 1;
dif = n ^ m;
for (i = 0; i < (sizeof(unsigned long int) * 8); i++)
{
if (result == (dif & result))
j++;
result <<= 1;
}
return (j);
}
