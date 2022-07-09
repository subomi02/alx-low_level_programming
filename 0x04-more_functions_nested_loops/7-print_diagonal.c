#include "main.h"

/**
 * print_diagonal - print diagonal (_) n number of times
 * @a: integer variable
 */

void print_diagonal(int a)
{
	int column, i;
	char diagonal;

	diagonal = '\\';
	if (a <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (column = 1; column <= a; column++)
		{
			_putchar(diagonal);
			_putchar('n');

			for (i = 1; i <= column; i++)
			{
				if (column < a)
				{
					_putchar(' ');
				}
			}
		}
	}
}
