#include <ctype.h>
#include <unistd.h>
#include "main.h"

/*
 *main - Entry point
 *
 *return: Always 0
 */

int main(void)
{
int r;

r = _isalpha('H');
_putchar(r + '0');
r = _isalpha('o');
_putchar(r + '0');
r = _isalpha(108);
_putchar(r + '0');
r = _isalpha(';');
_putchar(r + '0');
_putchar('\n');
return (0);
}

/**
 *_isalpha - Checks if argument is an alphabet
 *@c - Stores the argument
 */

int _isalpha(int c)
{
if (isalpha(c) == 0)
{
return (0);
}
else
{
return (1);
}
}
