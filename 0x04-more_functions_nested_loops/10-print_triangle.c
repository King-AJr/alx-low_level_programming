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
int i, j;
for (i = 0; i < n; i++)
{
for (j = n; j = i; j--)
{
_putchar(' ');
}
_putchar('#');
_putchar('\n');
}
_putchar('\n');
}
