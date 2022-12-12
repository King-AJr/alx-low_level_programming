#include <ctype.h>
#include "main.h"

/**
 * _isupper - this function checks if a char is uppercase
 * @c: this variable stores the argument given to the function
 * Return: return 1 if c is uppercase else return 0
 */

int _isupper(int c)
{
if (isupper(c) != 0)
{
return (1);
}
else
{
return (0);
}
}
