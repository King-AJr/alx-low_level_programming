#include "search_algos.h"

/**
 * recursive_search - recursively carry out binary search
 * @low: lower index for array to search.
 * @high: higher index for array to search.
 * @array: original array.
 * @value: target value to search for.
 * Return: return index to target
 **/

int recursive_search(size_t low, size_t high, int *array, int value)
{
	size_t mid, i;

	if (low > high)
		return (-1);
	mid = (high + low) / 2;
	printf("Searching in array: ");
	for (i = low; i < high; i++)
		printf("%d, ", array[i]);

	printf("%d\n", array[i]);


	if (array[mid] == value)
	{
		return (mid);
	}
	else if (array[mid] < value)
	{
		low = mid + 1;
		return (recursive(low, high, array, value));
	}
	else
	{
		high = mid - 1;
		return (recursive(low, high, array, value));
	}
}

/**
 * binary_search - carry out binary search on array.
 * @array: pointer to first element in array
 * @size: size of array
 * @value: target value
 * Return: return index to target value
 */
int binary_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;
	int index;

	index = recursive(low, high, array, value);
	return (index);
}
