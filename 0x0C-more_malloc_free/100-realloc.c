#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * _realloc - reallocates blocks of memory
 * @ptr: pointer to the memory previously allocated
 * @old_size: size of the previous memory
 * @new_size: new size in bytes
 *
 * Return: pointer to the reallocated memory if successful, NULL, otherwise
 */

void *_realloc(void *pr, unsigned int o_size, unsigned int n_size)
{
	int *t;

	if (n_size == o_size)
		return (pr);
	t = realloc(pr, n_size);
	if (t == NULL)
		return (NULL);

	return (t);
}
