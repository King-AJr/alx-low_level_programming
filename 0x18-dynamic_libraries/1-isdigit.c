#include <ctype.h>
#include "main.h"
/**
 * _isdigit - this functions checks if an argument is a digit
 * @c: stores the argument given to the user
 * Return: return 1 if c is a digit else return 0
 */

int _isdigit(int c)
{
if (isdigit(c) != 0)
{
return (1);
}
else
{
return (0);
}
}
