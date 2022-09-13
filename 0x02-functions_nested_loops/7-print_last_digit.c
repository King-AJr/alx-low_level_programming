#include "main.h"
#include <stdlib.h>

/**
 * print_last_digit - print the last digit of a number
 * @a: stores the argument recieved
 *
 * Return - the last digit
 */

int print_last_digit(int a)
{
int b = int a % 10;
_putchar(b);
return (b);
}
