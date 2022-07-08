#include "main.h"

/**
* print_square - print square
* @a: integer variable
*
*/

void print_square(int a)
{
	if (a < 1)
		_putchar('\n');
	else
	{
		int b;

		for (b = 1; b <= a; b++)
		{
			int c;

			for (c = 1; c <= a; c++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
