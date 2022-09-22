#include "main.h"
#include <ctype.h>
#include <string.h>

/**
 * string_toupper - converts a given string to uppercase
 * @h: string passed to the function
 * Return: return uppercase string
 */

char *string_toupper(char *h)
{
int i;
char ch;
int j = strlen(h);

for (i = 0; i <= j; i++)
{
h[i] = toupper(h[i]);
}
return (h);
}
