#include "main.h"

/**
 * print_sign - print the sign of the input
 * @b: input
 * Return **
 */

int print_sign(int b)
{
	if (b > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (b < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
