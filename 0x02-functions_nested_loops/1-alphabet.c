#include <unistd.h>
#include "main.h"

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/

int main(void)
{
print_alphabet();
return (0);
}

/**
 * print_alphabet: prints lowercase alphabets
 * @a: stores the value to be displayed
 */

void print_alphabet(void)
{
int a;
for (a = 'a'; a <= 'z'; a++)
{
_putchar(a);
_putchar('\n');
}
}
