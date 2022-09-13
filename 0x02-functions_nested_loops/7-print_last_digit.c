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
if (a < 0)
{
int b = abs(a) % 10;
_putchar(b + '0');
return (b);
}
else
{
int b = a % 10;
_putchar(b + '0');
return (b);
}
}
