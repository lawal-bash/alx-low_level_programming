#include "main.h"
/**
 * _strchr - locating a char in a string
 * @s: occurance of string
 * @c: character
 * Return: the pointer to the first occurrence
 */
char *_strchr(char *s, char c)
{
while (*s)
{
if (*s != c)
s++;
else
return (s);
}
if (c == '\0')
return (s);
return (NULL);
}
}
