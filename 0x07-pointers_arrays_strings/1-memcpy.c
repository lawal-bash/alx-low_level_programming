#include "main.h"
/**
 * _memcpy - copy memory aera
 * @dest: destination memory area
 * @src: source memory aera
 * @n: bytes in memory
 * Return: Nothing
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0;
while (i < n)
{
dest[i] = src[i];
i++;
}
