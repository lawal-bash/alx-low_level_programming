#include "main.h"
/**
 * print_alphabet - Print alphabet in lower case followed by a newline
 */
void print_alphabet(void)
{
char alphabetlower;
/* print lowercase letters */
for (alphabetlower = 'a'; alphabetlower <= 'z'; alphabetlower++)
_putchar(alphabetlower);
_putchar('\n');
}
