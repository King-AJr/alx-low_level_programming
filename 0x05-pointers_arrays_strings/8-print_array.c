#include "main.h"
#include <stdio.h>

/**
 * print_array - print n numbers of array a
 * @a: stores the array to be printed
 * @n: stores the number of array arguments to be printed
 * Return: nothing
 */

void print_array(int *a, int n)
{
int b = n - 1;
int i;
for (i = 0; i <= b; i++)
{
if (i == b)
printf(" %d", a[i]);
else if (i == 0)
printf("%d," a[i]);
else
{
printf(" %d,", a[i]);
}
}
}
