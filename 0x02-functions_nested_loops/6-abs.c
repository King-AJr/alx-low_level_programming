#include <unistd.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - entry point
 *
 * return 0
 */

int main(void)
{
int r;

r = _abs(-1);
_putchar(r);
r = _abs(0);
_putchar(r);
r = _abs(1);
_putchar(r);
r = _abs(-98);
_putchar(r);
return (0);
}

/**
 *_abs - returns the abs value of an argument
 *@ab - carries argument
 *@a - stores result of computation
 *return value of a
 */

int _abs(int ab)
{
int a = abs(ab);
return (a);
}
