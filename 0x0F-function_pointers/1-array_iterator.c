#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - executes a function as a parameter on array elements
 * @array: array to be passed to function
 * @size: size of array
 * @action: function that acts on array elements
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	for (i = 0; i <= (size - 1); i++)
	{
		action(array[i]);
	}
}
