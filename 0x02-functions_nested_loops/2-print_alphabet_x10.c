#include "main.h"
/**
 * print_alphabet_x10 - A program that print kower alphabet ten times
 */
void print_alphabet_x10(void)
{
char alphabetlower;
int counting = 0;
/* print lowercase letters */
while (counting++ <= 9)
{
for (alphabetlower = 'a'; alphabetlower <= 'z'; alphabetlower++)
_putchar(alphabetlower);
_putchar('\n');
}
}
