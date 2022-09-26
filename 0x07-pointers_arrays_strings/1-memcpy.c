#include "main.h"
#include <string.h>

/**
 * _memcpy - copies memory area
 * @dest: destination memory area
 * @src: source memory area
 * @n: number of bytes ti copy
 * Return: return the result
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *m = memcpy(dest, src, n);

	return (m);
}
