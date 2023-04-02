#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>

/**
 * string_nconcat - concatenate the first n bytes of a string
 * @sr1: pointer to the first string
 * @sr2: pointer to the second string
 * @size: size of sr2 to be concatenated
 *
 * Return: pointer to the concatenated string
 */

char *string_nconcat(char *sr1, char *sr2, unsigned int size)
{
	unsigned int len1, len2;
	char *pr;

	if (sr1 == NULL)
		sr1 = "";
	if (sr2 == NULL)
		sr2 = "";

	len1 = strlen(sr1);
	len2 = strlen(sr2) <= size ? strlen(sr2) : size;
	pr = malloc(len1 + len2 + 1);

	if (pr == NULL)
		return (NULL);

	strcpy(pr, sr1);
	strncat(pr, sr2, size);

	return (pr);
}
