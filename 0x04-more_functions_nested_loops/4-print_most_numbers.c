#include "main.h"

/**
 * print_most_numbers - this function prints from 0-9 but excludes 2 & 4
 *
 * Return: return void
 */

void print_most_numbers(void)
{
int i;
for (i = 0; i < 10; i++)
{
if (i == 2 || i == 4)
continue;
else
{
_putchar(i + '0');
}
}
_putchar('\n');
}
