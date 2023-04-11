#include "main.h"
/**
 * get_endianness - checking the endianness
 * Return: zero if big endian and 1 if little endian
 */
int get_endianness(void)
{
int i;
char *c;
i = 1;
c = (char *)&i;
return (*c);
}
