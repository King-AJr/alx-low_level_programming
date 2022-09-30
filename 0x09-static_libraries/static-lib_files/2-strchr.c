#include "main.h"
#include <string.h>

/**
 * _strchr - locates a the first occurence of a char in a string
 * @s: string to be searched
 * @c: character to be searched for
 * Return: return the result
 */

char *_strchr(char *s, char c)
{
	char *m = strchr(s, c);

	return (m);
}
