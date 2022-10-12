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

	if (size <= 0)
		return (-1);
/**
 * loop - loops through and applies cmp to array and returns index
 * Return: return index
 */

	int loop(void)
	{
		for (i = 0; i <= size; i++)
		{
			j = cmp(array[i]);

			if (j != 0)
				break;

			if (i == size && j == 0)
				return (-1);
		}

		return (i);
	}

	k = loop();

	return (k);
}
