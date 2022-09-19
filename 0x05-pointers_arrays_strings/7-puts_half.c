#include "main.h"
#include <string.h>

/**
 * puts_half - prints the second half of a string
 * @str: the argument passed to the function
 */

void puts_half(char *str)
{
int i = 0;
int length = strlen(str);
int len = (length / 2);
int gbik;
if (len % 2 == 0)
gbik = len;
else
{
gbik = len + 1;
}

for (i = gbik; i <= length; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
