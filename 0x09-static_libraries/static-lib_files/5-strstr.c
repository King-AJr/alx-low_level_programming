#include "main.h"
#include <string.h>

/**
 * _strstr - returns the remaining strings after a specified string
 * @haystack: string to be searched
 * @needle: specified string
 * Return: returns result
 */

char *_strstr(char *haystack, char *needle)
{
	char *m = strstr(haystack, needle);

	return (m);
}
