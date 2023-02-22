#include <stdio.h>
/**
 * main - Prints first 50Fibonacci num, start with 1n 2 sep by camma n space
 * Return: Always 0.
 */
int main(void)
{
int count;
unsigned long fib1 = 0, fib2 = 1, sum;
for (count = 0; count < 50; count++)
{
sum = fib1 + fib2;
printf("%lu", sum);
fib1 = fib2;
fib2 = sum;
if (count == 49)
printf("\n");
else
printf(", ");
}
return (0);
}
