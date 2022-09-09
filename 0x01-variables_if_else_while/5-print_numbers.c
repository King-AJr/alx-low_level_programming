#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

int main(void)
{
int i = 0;
char a[10] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
while(i < 10)
{
putchar(a[i]);
i = i + 1;
}
putchar('\n');
return (0);
}
