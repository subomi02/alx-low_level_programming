#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - allocates memory using malloc
 *@b:Amount of memory to allocate
 * Return: Always 0.
 */


void *malloc_checked(unsigned int b)
{
	int *str;

	str = malloc(b);
	if (str == NULL)
		exit(98);

	return (str);
}
