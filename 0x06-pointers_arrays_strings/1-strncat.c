#include "main.h"
/**
 * _strncat - to concatenates two strings using n bytes
 * @dest: destination strings
 * @src: source strings
 * @n: number of character to be append
 * Return: the destination string
 */
char *_strncat(char *dest, char *src, int n)
{
int destlen = 0;
int srclen = 0;
int i;
for (i = 0; dest[i] != '\0'; i++)
destlen++
for (i = 0; src[i] != '\0'; i++)
srclen++
for (i = 0; i < n; i++)
dest[destlen + 1] = src[i];
return (dest);
}
