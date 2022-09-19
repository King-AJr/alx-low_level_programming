#include "main.h"
#include <string.h>

/**
 * print_rev - print given strings in reverse
 * @s: stores the string passed to the fx
 */

void print_rev(char *s)
{
int len = strlen(s);
int i;
for (i = len; i >= 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
