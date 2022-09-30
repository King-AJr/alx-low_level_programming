#include "main.h"
#include <string.h>

/**
 * _strcat - takes two strings and concatenates them
 * @dest: holds the first argument passed to the function
 * @src: holds the second string to be concatenated
 * Return: returns the concatenated text.
 */

char *_strcat(char *dest, char *src)
{
char *sum = strcat(dest, src);
return (sum);
}
