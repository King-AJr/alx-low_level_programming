#include "main.h"

/**
 * print_diagonal - print a triangle
 * @n: defines the size of the triangle
 * Return: return void
 */

void print_diagonal(int n)
{
int i, j;
for (i = 0; i < n; i++)
{
for (j = 0; j < i; j++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
_putchar('\n');
}
