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
	int i;
	int j = 0;

	j = strlen(str);

	char *arr = (char *) malloc(j * sizeof(char));

	if (arr == NULL || str == NULL)
	{
		return (NULL);
	}

	arr = strdup(str);

	return (arr);
}
