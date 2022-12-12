#include "main.h"
#include <string.h>

/**
 * _memset - uses std memset function to fill memory with a constant byte
 * @s: represents array to be altered
 * @b: represents char to fill array with
 * @n: number of times to repeat b in the array
 * Return: return result of memset fx
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *m = memset(s, b, n);

	return (m);
}
