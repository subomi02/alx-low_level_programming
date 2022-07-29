#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - allocates memory for an array
 * @nmemb: Number of array elements
 * @size: size i =n bytes of array elements
 *
 * Return: pointer to memory allocation
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int str;

	str = malloc(size * nmemb);

	if (str == NULL)
		return (0);

	return (str);
}
