#include "main.h"

/**
 * factorial - returns the factorial of a number
 * @n: argument passed to function
 * Return: return factorial of n
 */

int factorial(int n)
{
	int b = n;

	if (n == 1 || n == 0)
		return (1);
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		b *= factorial(n - 1);
	}
	return (b);
}
