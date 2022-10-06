#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenate 2 strings
 * @s1: destination string
 * @s2: source string
 * @n: number of bytes to remove from s2
 * Return: return concatenated string on success
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i;
	int j;

	j = 0;

	int a = (strlen(s1)) + 1;

	if (s1 == NULL)
		s1 = " ";
	if (s2 == NULL)
		s2 = " ";
	char *c = malloc(sizeof(char) * (a + n));

	if (c == NULL)
		return (NULL);
	for (i = 0; i < s1[i]; i++)
	{
		c[j++] = s1[i];
	}
	for (i = 0; s2[i] && i < n; i++)
	{
		c[j++] = s2[i];
	}
	c[j] = '\0';
return (c);
}
