#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

int main(void)
{
char a = 'a';
while (a <= 'z')
{
if (a == 'e' || a == 'q')
continue;
putchar(a);
a = a + 1;
}
putchar('\n');
return (0);
}
