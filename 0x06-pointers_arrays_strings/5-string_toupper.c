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
int index = 0;

while (str[index])
{
if (str[index] >= 'a' && str[index] <= 'z')
str[index] -= 32;

index++;
}

return (str);
}
