#include "main.h"

/**
 * reverse_array - takes an array reverses it
 * @a: the array passed to the function
 * @n: size of the array
 * Return: void
 */

void reverse_array(int *a, int n)
{
int tmp, index;

for (index = n - 1; index >= n / 2; index--)
{
tmp = a[n - 1 - index];
a[n - 1 - index] = a[index];
a[index] = tmp;
}
}
