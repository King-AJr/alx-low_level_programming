#include "main.h"
#include <string.h>

/**
 * _puts - prints a given string
 * @str: stores the given string
 * Return: nothing
 */

void _puts(char *str)
{
int len = strlen(str);
int i;
for (i = 0; i < len; i++)
{
_putchar(str[i]);

}
_putchar('\n');
}
