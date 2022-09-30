#include "main.h"
#include <string.h>

/**
 * _strspn - returns the number of strings before a character in a string
 * @s: string to ve searched
 * @accept: character to be found
 * Return: return the result of the function
 */

unsigned int _strspn(char *s, char *accept)
{
	int m = strspn(s, accept);

	return (m);
}
