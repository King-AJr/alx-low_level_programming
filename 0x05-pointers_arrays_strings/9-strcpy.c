#include "main.h"
#include <string.h>

/**
 * _strcpy - copy strings from first array to second
 * @dest: carries the first array
 * @src: represents second array
 * return: return output of the copied string
 */

char *_strcpy(char *dest, char *src)
{
char *s = strcpy(dest, src);
return(s);
}
