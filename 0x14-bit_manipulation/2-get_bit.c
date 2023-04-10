#include "main.h"

/**
 * get_bit - to returns the value of a bit at a given index
 * @n: checking
 * @index: the index from zero
 * Return: the value of thr bit at thr index or o if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
unsigned long int div, res;
if (index > (sizeof(unsigned long int) * 8 - 1))
return (-1);
div = 1 << index;
res = n & div;
if (res == div)
return (1);
return (0);
}
