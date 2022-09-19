#include "main.h"
#include <string.h>

/**
 * puts_half - prints the second half of a string
 * @str: the argument passed to the function
 */

void puts_half(char *str)
{
int length = strlen(str);
int len = length / 2;
int i;
for (i = len - 1; i <= length; i++)
{
_putchar(str[i]);
}
}
