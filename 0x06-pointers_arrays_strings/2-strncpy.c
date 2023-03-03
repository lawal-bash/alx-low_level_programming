#include "main.h"
/**
 * _strncpy - to concatenates two strings using n bytes
 * @dest: destination strings
 * @src: source strings
 * @n: lenght of integer.
 * Return: the destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;
for (i = 0; i < n && *(src + i); i++)
{
*(dest + i) = *(src + i);
}
for (; i < n; i++)
{
*(dest + i) = '\0';
}
return (dest);
}
