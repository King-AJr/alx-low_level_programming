#include "main.h"

/**
 * _pow_recursion - returns x raised to power y
 * @x: number to be raised
 * @y:number of times to raise x
 * Return: return x raised to power y
 */

int _pow_recursion(int x, int y)
{
	int b;

	if (y == 0)
		return (1);
	else if (y == 1)
		return (x);
	else if (y < 0)
		return (-1);
	x *= _pow_recursion(x, y - 1);

	return (x);
}
