#include "main.h"

/**
 * _isalpha - check for lowercase and uppercase characters
 * Return: Always 0
 * @b: input
 */

int _isalpha(int b)
{
	int lower = (b >= 'a' && b <= 'z');
	int upper = (b >= 'A' && b <= 'Z');

	if (lower || upper)
		return (1);
	else
		return (0);
}
