#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - print the lenght of a string
 * @s: string whose length is to be printed
 * Return: void
 */

int _strlen_recursion(char *s)
{
	int a = 0;

	if (*s)
	{
		a++;
		a += _strlen_recursion(s + 1);
	}
	return (a);
}
