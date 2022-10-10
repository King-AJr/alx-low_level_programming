#include "dog.h"
#include <stdlib.h>
/**
 * print_dog - print the members of a given struct
 * @d: pointer to the struct
 * Return: void
 */

void print_dog(struct dog *d)
{
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
