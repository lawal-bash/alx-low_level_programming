#include <stdio.h>
/**
 * main - Print alphabet in lowercase except q and e.
 * Return: 0
 */
int main(void)
{
char lowercase;
/* print lowercase letters except q and e */
for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
{
if (lowercase != 'q' && lowercase != 'e')
putchar(lowercase);
}
putchar('\n');
return (0);
}
