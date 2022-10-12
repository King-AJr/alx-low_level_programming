#include "function_pointers.h"
#include <stddef.h>

{
	unsigned int i;

	for (i = 0; i <= (size - 1); i++)
	{
		action(array[i]);
	}
}
