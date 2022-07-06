#include "main.h"

/**
 * _isalpha - check for lowercase and uppercase characters
 * Return: Always 0
 * @b: input
 */

int _isalpha(int b)
{
	if ((b >= 'a' && b <= 'z') || (b >= 'A' && b >= 'Z'))
		return (1);
	else
		return (0);
}
