#include "main.h"

/**
 * print_diagonal - print diagonal (_) n number of times
 * @a: integer variable
 */

void print_diagonal(int a)
{
	int b;

	if (a <= 0)
	{
		_putchar('\n');
		return;
	}

	for (b = 0; b < a; b++)
		_putchar('_');
	_putchar('\n');
}
