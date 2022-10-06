#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates space for an array using malloc
 * @nmemb: numbwr of elements to be stored.
 * @size: size of each element
 * Return: return a void pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *a;
	char *b;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	a = malloc(nmemb * size);
	if (a == NULL)
		return (NULL);
	b = a;
	for (i = 0; i < (nmemb * size); i++)
	{
		b[i] = '\0';
	}
	return (a);
}
