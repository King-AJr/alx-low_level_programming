#include "main.h"

/**
 * print_square - print a n by n square
 * @n: stores argument passed to the function
 * Return: return void
 */

void print_square(int n)
{
int i, j;
if (n == 0 || n < 0)
{
_putchar('\n');
}
else
{
for (i = 0; i < n; i++)
{
for (j = 0; j < n; j++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
