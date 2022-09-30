#include <string.h>
#include "main.h"

/**
 * _strncat - concatenates two strings but takes in the amount of bytes to copy
 * @dest: a pointer to the string to be concatenated upon
 * @src: a pointer to the string to be copied
 * @n: amount of bytes to copy from the srx
 * Return: return pointer to the concatenated test
 */

char *_strncat(char *dest, char *src, int n)
{
char *cat = strncat(dest, src, n);
return (cat);
}
