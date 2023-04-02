#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * _realloc - reallocates block of memory
 * @ptr: pointer
 * @old_size: size of the previous memory
 * @new_size: new size in bytes
 *
 * Return: pointer to the reallocated memory if successful, NULL, otherwise
 */

void *_realloc(void *pr, unsigned int o_size, unsigned int n_size)
{
	int *a;

	if (n_size == o_size)
		return (pr);
	a = realloc(pr, n_size);
	if (a == NULL)
		return (NULL);

	return (a);
}
