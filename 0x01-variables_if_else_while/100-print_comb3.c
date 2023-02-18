#include <stdio.h>
/**
 * main - Print all possible different combination of two digits.
 * Return: 0
 */
int main(void)
{
int digita, digitb;
for (digita = 0; digita < 9; digita++)
{
for (digitb = digita + 1; digitb < 10; digitb++)
{
putchar((digita % 10) + '0');
putchar((digitb % 10) + '0');
if (digita == 8 && digitb == 9)
continue;
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
