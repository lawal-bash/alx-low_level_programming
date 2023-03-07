#include "main.h"
/**
 * _memcpy - coping memory area
 * @dest: destination memory area
 * @src: source memory aera
 * @n: bytes in memory
 * Return: a point to destination.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0;
while (i < n)
{
dest[i] = src[i];
i++;
}
return (dest);
}
