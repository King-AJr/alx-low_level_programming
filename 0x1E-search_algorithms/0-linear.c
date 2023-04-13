#include "search_algos.h"

/**
 * linear_search - carries out a linear search on a given array
 * @array: aarray to be searched
 * @size: size of array
 * @value: value to search for in array
 * Return: return index of value if found else return -1
 **/

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%zu] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
