#include "main.h"
/**
 * _strncpy - to concatenates two strings using n bytes
 * @dest: destination strings
 * @src: source strings
 * @n: number of character to be append.
 * Return: the destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;
for (i = 0; i < n; i++)
dest[i] = src[i];
return (dest);
}
