#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - executes a given function on each array element
 * @array: array to execute function on
 * @size: suze of array
 * @action: function to be executed on array elements
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;

	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
