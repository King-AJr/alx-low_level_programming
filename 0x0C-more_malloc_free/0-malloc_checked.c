#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - returns a void pointer to an allocated space
 * @b: the amount of space to allocate
 * Return: void pointer if successful
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b * sizeof(b));
	if (p == NULL)
		exit(98);
	return (p);
}
