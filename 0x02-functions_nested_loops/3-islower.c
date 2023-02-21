#include "main.h"
/**
 * _islower - A program that check if a char is lowercase
 * @c: is the parameter to be checked
 * Return: 1 if char is lowercase, otherwise 0
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
