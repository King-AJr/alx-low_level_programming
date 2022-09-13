#include <unistd.h>
#include <ctype.h>
#include "main.h"

/**
 * main - entry point
 *
 * Return - always (0) success
 */

int main(void)
{
int r;

r = _islower('H');
_putchar(r + '0');
r = _islower('o');
_putchar(r + '0');
r = _islower(108);
_putchar(r + '0');
_putchar('\n');
return (0);
}

/**
 * _islower - checks if argument is lowercase
 * @c - stores argument
 */

int _islower(int c)
{
if (islower(c) > 0)
{
return (1);
}
else
{
return (0);
}
}
