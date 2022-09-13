#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - print no. from n to 98
 *
 * @n: holds the argument recieved from the user
 * Return: return nothing
 */

void print_to_98(int n)
{
if (n < 98)
{
while (n <= 98)
{
printf("%d", n);
if (n != 98)
{
printf(", ");
}
n++;
}
}
else if (n > 98)
{
while (n >= 98)
{
printf("%d", n);
if (n != 98)
{
printf(", ");
}
n--;
}
}
else
{
printf("98");
}
printf("\n");
}
