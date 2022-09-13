#include <unistd.h>
#include <ctype.h>
#include "main.h"

/**
 * _islower - checks if argument is lowercase
 *
 *@c: stores argument
 *Return: 1 if int c is lowercase, 0 if otherwise
 *
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
