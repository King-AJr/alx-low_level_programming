#include "main.h"

/**
 * print_diagonal - print a triangle
 * @n: defines the size of the triangle
 * Return: return void
 */

int main(void)
{
    print_diagonal(0);
    print_diagonal(2);
    print_diagonal(10);
    print_diagonal(-4);
    return (0);
}

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
