#include "main.h"
#include <stdlib.h>

/**
 * print_last_digit - print the last digit of a number
 * @a: stores the argument recieved
 *
 * Return: the last digit
 */

int print_last_digit(int a)
{
int b = a % 10;
if (a < 0)
{
b = -1 * b;
}
_putchar(b + '0');
return (b);
}
