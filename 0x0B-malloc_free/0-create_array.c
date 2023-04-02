#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - create an array of char
 * @sizes: size of the array
 * @arrd: character
 *
 * Return: pointer to the array or null if it fails
 *
 */

char *create_array(unsigned int sizes, char arrd)
{
	char *array_alloc = malloc(sizes * sizeof(char));
	unsigned int id;

	if (sizes == 0 || array_alloc == NULL)
		return (NULL);

	for (i = 0; i < sizes; i++)
		array_alloc[i] = arrd;

	return (array_alloc);
}
