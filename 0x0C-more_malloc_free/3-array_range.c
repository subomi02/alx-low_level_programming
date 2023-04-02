#include <string.h>
#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_range - create an array of integers
 * @min: minimum value of the array
 * @max: maximum value of the array
 *
 * Return: pointer to the newly created array if successful
 */

int *array_range(int min, int max)
{
	int r, i = 0,  *ptr;

	if (min > max)
		return (NULL);

	r  = max - min;
	ptr = malloc((r + 1) * sizeof(*ptr));

	if (ptr == NULL)
		return (NULL);

	for (r = min; r <= max; r++)
		ptr[i++] = r;
	return (ptr);
}
