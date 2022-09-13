#include "main.h"

/**
 * times_table - print 9 times table
 *
 * Return: return void
 */

void times_table(void)
{
int i, j = 0, m;
for (i = 0; i < 9; i++)
{
for (m = 0; i < 9; m++)
{
_putchar(j + '0');
if (m == 8)
{
j = 0;
}
else
{
j = j + i;
}
}
_putchar('\n');
}
}
