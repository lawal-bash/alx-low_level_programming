#include "main.h"
/**
 * _memset - fills memory with constant byte.
 * @b: the address of memory to print
 * @s: the size of the memory to print
 * @n: byte of memory aera pointing to s
 * Return: The pointer to memory area of s
 */
void char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
i = 0;
while (i < n)
{
s[i] = b;
i++;
}
return (s);
}
