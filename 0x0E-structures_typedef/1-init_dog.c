#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - set parameters of a given function
 * @d: pointer to a struct
 * @name: proposed name to be passed to struct
 * @age: proposed age to be passed to struct
 * @owner: proposed owner to ve passed to struct
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
