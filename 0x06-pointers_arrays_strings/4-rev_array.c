#include "main.h"
/**
 * reverse_array - to reverse the content of array
 * @a: array
 * @n: integer
 * Return: 0
 */
void reverse_array(int *a, int n)
{
int i, c;
for (i = 0; (i < (n - 1) / 2); i++)
{
c = a[i];
a[i] = a[n - 1 - i];
a[n - 1 - i] = c;
}
}
