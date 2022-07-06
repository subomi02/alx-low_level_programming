#include "main.h"

/**
 * _islower - check for lowercase characters
 * Return: Always 0
 * @b: input
 */

int _islower(int b)
{
	if (b >= 'a' && b <= 'z')
		return (1);
	else
		return (0);
}
