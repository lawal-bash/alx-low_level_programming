#include <stdio.h>
/**
 * main - Print alphabet in lowercase and uppercase.
 * Return: 0
 */
int main(void)
{
char letterlower;
char letterupper;
/* print lowercase letters */
for (letterlower = 'a'; letterlower <= 'z'; letterlower++)
putchar(letterlower);
/* print uppercase letters */
for (letterupper = 'A'; letterupper <= 'Z'; letterupper++)
putchar(letterupper);
putchar('\n');
return (0);
}
