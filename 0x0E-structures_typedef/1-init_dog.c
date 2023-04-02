
#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initializes variable e `struct dog`
 * @d: struct dog
 * @name: string
 * @age: integer
 * @owner: string
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
