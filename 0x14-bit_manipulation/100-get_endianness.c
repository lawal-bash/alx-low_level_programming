#include "main.h"
/**
 * get_endianness - checking the endianness
 * Return: zero if big endian and 1 if little endian
 */
int get_endianness(void)
{
unsigned int x = 1;
char *c = (char*) &x;
return (int)*c;
}
