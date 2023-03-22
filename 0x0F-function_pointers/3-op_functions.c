#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
  * op_add - use to return the sum of a and b
  * @a: first integer
  * @b: second integer
  *
  * Return: sum of integer
  */
int op_add(int a, int b)
{
return (a + b);
}

/**
  * op_sub - use to return diff of a & b
  * @a: first integer
  * @b: first integer
  *
  * Return: diff of integer
  */
int op_sub(int a, int b)
{
return (a - b);
}

/**
  * op_mul - use to return product of a & b
  * @a: first integer
  * @b: first integer
  *
  * Return: product of integer
  */
int op_mul(int a, int b)
{
return (a * b);
}

/**
  * op_div - use to return division of a & b
  * @a: first integer
  * @b: first integer
  *
  * Return: division of integer
  */
int op_div(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a / b);
}

/**
  * op_mod - use to return remainder of dividion of a and b
  * @a: first integer
  * @b: first integer
  *
  * Return: remainder of integer
  */
int op_mod(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a % b);
}
