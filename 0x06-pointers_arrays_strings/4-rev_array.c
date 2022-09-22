#include "main.h"

/**
 * reverse_array - takes an array reverses it
 * @a: the array passed to the function
 * @n: size of the array
 * Return: void
 */

void reverse_array(int *a, int n)
{
int aux[n];

for (int i = 0; i < n; i++)
{
aux[n - 1 - i] = a[i];
}

for (int i = 0; i < n; i++)
a[i] = aux[i];
}
