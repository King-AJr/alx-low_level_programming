#include "main.h"

/**
 * times_table - print 9 times table
 *
 * Return: return void
 */

void times_table(void)
{
int rone, cone, d;

for (rone = 0; rone <= 9; rone++)
{
_putchar('0');

for (cone = 1; cone <= 9; cone++)
{
_putchar(',');
_putchar(' ');
d = (rone * cone);

if (cone < 9)
_putchar(' ');

else 
_putchar((d / 10) + '0');
}
_putchar('\n');
}
}
