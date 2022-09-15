#include "main.h"

/**
 * print_line - print line based on no. given
 * @n: number of times line will be printed
 * Return: return void
 */

void print_line(int n)
{
int i;
if (n == 0 || n < 0)
_putchar ('\n');
else
{
for (i = 0; i < n; i++)
{
_putchar('_');
}
_putchar('\n');
}
}
