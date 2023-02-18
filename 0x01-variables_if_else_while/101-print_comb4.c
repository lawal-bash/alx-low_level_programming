#include <stdio.h>
/**
 * main - Print all possible different combination of three digits.
 * Return: 0
 */
int main(void)
{
int digita, digitb, digitc;
for (digita = 0; digita < 8; digita++)
{
for (digitb = digita + 1; digitb < 9; digitb++)
{
for (digitc = digitb + 1; digitc < 10; digitc++)
{
putchar((digita % 10) + '0');
putchar((digitb % 10) + '0');
putchar((digitc % 10) + '0');
if (digita == 7 && digitb == 8 && digitc == 9)
continue;
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
