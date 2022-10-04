#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - returns pojnter to a copy of a specified string
 * @str: pointer to specified string
 * Return: return NULL if unsuccessful and char pointer if successful
 */

char *_strdup(char *str)
{
char *duplicate;
	int index, len = 0;

	if (str == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
		len++;

	duplicate = malloc(sizeof(char) * (len + 1));

	if (duplicate == NULL)
		return (NULL);

	for (index = 0; str[index]; index++)
		duplicate[index] = str[index];

	duplicate[len] = '\0';

	return (duplicate);
}
