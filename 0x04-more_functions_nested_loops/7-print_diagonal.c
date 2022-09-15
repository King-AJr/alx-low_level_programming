#include "main.h"

/**
 * print_diagonal - print a triangle
 * @n: defines the size of the triangle
 * Return: return void
 */

void print_diagonal(int n)
{
int i, j;
if (n == 0 || n < 0)
_putchar('\n');
else
{
for (i = 0; i < n; i++)
{
for (j = 0; j < i; j++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
}
