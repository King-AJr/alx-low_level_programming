#include <ctype.h>
#include <unistd.h>
#include "main.h"

/**
 *_isalpha - Checks if argument is an alphabet
 *@c: Stores the argument
 *Return: 0 if int c is alphabet, 1 if otherwise
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
