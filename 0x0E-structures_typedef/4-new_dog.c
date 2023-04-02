#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: string name
 * @age: int
 * @owner: string
 * Return: points to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *doge;
	int i, b, a;
	char *n, *o;

	doge = malloc(sizeof(struct dog));
	if (doge == NULL)
		return (NULL);

	for (i = 0; name[i] != '\0'; i++)
		;
	for (b = 0; owner[b] != '\0'; b++)
		;

	c = malloc(sizeof(char) * i + 1);
	if (c == NULL)
	{
		free(doge);
		return (NULL);
	}
	o = malloc(sizeof(char) * b + 1);
	if (o == NULL)
	{
		free(c);
		free(doge);
		return (NULL);
	}
	for (a = 0; a <= i; a++)
		c[a] = name[a];
	for (a = 0; a <= b; a++)
		o[a] = owner[a];

	doge->name = c;
	doge->age = age;
	doge->owner = o;

	return (doge);
}
