#include <unistd.h>
#include "main.h"

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

int main(void)
{
/*@parameter a: stores command*/
char *a = "_putchar";
while (*a)
{
_putchar (*a);
a++;
}
_putchar ('\n');
return (0);
}

/**
 * _putchar - prints a given argument
 * @c stores the argument
 */

int _putchar (char c)
{
return (write(1, &c, 1));
}
