#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_triangle(2);
    print_triangle(10);
    print_triangle(1);
    print_triangle(0);
    return (0);
}

/**
 * print_triangle - print a triangle
 * @n: defines the size of the triangle
 * Return: return void
 */

void print_triangle(int n)
{
int i, j, k;
if (n == 0)
{
_putchar('\n');
}
else
{
for (i = 1; i <= n; i++)
{
for (j = 0; j != (n - i); j++)
{
_putchar(' ');
}
for (k = 0; k < i; k++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
