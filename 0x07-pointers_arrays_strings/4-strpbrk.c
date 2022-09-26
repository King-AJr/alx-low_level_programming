#include "main.h"
#include <string.h>

/**
 * _strpbrk - returns similar char between two strings
 * @s: first string
 * @accept: second string
 * Return: return the result
 */

char *_strpbrk(char *s, char *accept)
{
	char *m = strpbrk(s, accept);

	return (m);
}
