#include "main.h"
#include <ctype.h>
#include <string.h>

/**
 * string_toupper - converts a given string to uppercase
 * @str: string passed to the function
 * Return: return uppercase string
 */

char *string_toupper(char *str)
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
