#include <string.h>
#include "main.h"

/**
 *_strncpy - copies one string to another
 *@dest: the variable in which the second argument will be copied to
 *@src: the second arguments to be copied
 *@n: maximum number of bytes to be copied
 *Return: return a pointer to the variable copied into
 */

char *_strncpy(char *dest, char *src, int n)
{
char *copy = strncpy(dest, src, n);
return (copy);
}
