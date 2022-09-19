#include "main.h"
#include <string.h>

/**
 * puts2 - prints one and skips one char of s giben string
 * @str: stores the given string
 * Return: nothing
 */

void puts2(char *str)
{
int len = strlen(str);
int i;
for (i = 0; i < len; i += 2)
{
_putchar(str[i]);
}
}
