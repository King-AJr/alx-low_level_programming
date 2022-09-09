#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

int main(void)
{
char c = 'A';                                     
while (c <= 'Z') 
{ 
putchar(c);
putchar('\n');
c = c+1;
}
return (0);
}
