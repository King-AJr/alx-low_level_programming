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

