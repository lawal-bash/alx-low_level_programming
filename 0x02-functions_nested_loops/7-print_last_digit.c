#include "main.h"
/**
 * print_last_digit - computes the abs value of an int
 * @int: expected varaible type
 * Return: the the value of last digit
 */
int print_last_digit(int)
{
int num, digit;
/* Asking for input */
_putchar("Enter the digit: ");
scanf("%d", &num);
digit = num % 10;
/* Displaying output */
_putchar("Last Digit of %d is: %d", num, digit);
return (0);
}
