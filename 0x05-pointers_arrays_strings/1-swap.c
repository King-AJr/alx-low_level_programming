#include "main.h"


/**
 *swap_int - this function swaps two given numbers.
 *@a: holds the first number.
 *@b: holds the second number.
 */

void swap_int(int *a, int *b)
{
int c = *a;
*a = *b;
*b = c;
}
