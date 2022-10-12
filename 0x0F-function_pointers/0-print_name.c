#include "function_pointers.h"

/**
 * print_name - takes a name and passes it to a function which prints the name
 * @name: name to be printed
 * @f: pointer to the function that prints the name
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
