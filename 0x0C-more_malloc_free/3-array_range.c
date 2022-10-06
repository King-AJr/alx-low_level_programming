#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array containing elements min to max
 * @min: first element of array
 * @max: last element of array
 * Return: if success return pointer to new array
 */

int *array_range(int min, int max)
{
	int *c;
	int i;
	int b;

	if (min > max)
		return (NULL);
	b = max - min + 1;

	c = malloc(b * sizeof(int));
	if (c == NULL)
		return (NULL);
	for (i = 0; i < b; i++)
	{
		c[i] = min++;
	}
	return (c);
}
