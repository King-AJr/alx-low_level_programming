#include <unistd.h>
#include "main.h"

/**
 *print_alphabet- prints lowercase alphabets
 *
 *Return - nothing always
 */

void print_alphabet(void)
{
int a;
for (a = 'a'; a <= 'z'; a++)
{
_putchar(a);
}
_putchar('\n');
}
