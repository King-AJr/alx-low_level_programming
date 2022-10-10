#include "dog.h"
#include <stdlib.h>

/**
 * print_dog - print the members of a given struct
 * @d: pointer to the struct
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (name == NULL)
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);

		if (age != NULL)
			printf("Age: %f\n", d->age);
		else
			printf("Age: (nil)\n");

		if (owner == NULL)
			printf("Owner: (nil)\n");
		else
			printf("Owner: %s\n", d->owner);
	}
}
