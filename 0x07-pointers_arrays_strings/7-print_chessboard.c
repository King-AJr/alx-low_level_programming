#include "main.h"

/**
 * print_chessboard - print character of an 8x8 array
 * @a: pointer to array
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
int i;
char *baz = *a;

	for (i = 1; i <= 63; i++)
	{
		if (i % 8 == 0)
		{
			_putchar('\n');
			_putchar(baz[i]);
		}
		else
		{
			_putchar(baz[i]);
		}
	}
	_putchar('\n');
}
