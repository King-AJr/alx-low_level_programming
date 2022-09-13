#include <unistd.h>
#include "main.h"

/**
 * main - entry point
 *
 *Return: always (0) success
 */

int main(void)
{
print_alphabet_x10();
return (0);
}

/**
 * print_alphabet_x10 - prints 10 rows of a-z
 * @a - for first loop
 * @i - for outer loop
 */
void print_alphabet_x10(void)
{
int i;
char a;
for (i = 0; i <= 10; i++)
{
for (a = 'a'; a <= 'z'; a++)
{
_putchar (a);
}
_putchar ('\n');
}
}
