#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

int _strlen(const char *s);

/**
 * str_concat - concatenate two string together
 * @s1: pointer to first string
 * @s2: pointer to second string
 *
 * Return: pointer to the concatenated string
 *
 */

char *str_concat(char *s1, char *s2)
{
	int ic = 0, j = 0;
	char *output;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";
	ic = _strlen(s1);
	j = _strlen(s2);

	output = malloc((ic + j) * sizeof(*s1) + 1);

	if (output == 0)
		return (NULL);
	strcat(output, s1);
	strcat(output, s2);

	return (output);
}
/**
 * _strlen - get  the length of the string s
 * @s: pointer to the string whose length is required
 * Return: length of the string
 */
int _strlen(const char *s)
{
	int ic = 0;

	for (; s[ic] != '\0'; ic++)
		;
	return (ic);
}
