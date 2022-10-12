#include "function_pointers.h"

/**
 * int_index - prints the index of the first integer in an array
 * @array: array to search
 * @size: size of array
 * @cmp: function that checks for the first integer
 * Return: return index of first integer
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int  i, j, k;

	if (array == NULL || cmp == NULL)
		return (-1);

	if (size <= 0)
		return (-1);

	for (i = 0; i <= size; i++)
	{
		j = cmp(array[i]);

		if (j != 0)
			break;

		if (i == size && j == 0)
			return (-1);

	}

	k = i;

	return (k);
}
