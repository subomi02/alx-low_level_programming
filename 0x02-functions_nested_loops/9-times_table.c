#include "main.h"

/**
 * times_table - prints the nine times table
 *
 * return: nine times table
 */

void times_table(void)
{
	int b;
	int c;
	int fin;

	for (b = 0; b <= 9; b++)
	{
		for (c = 0; c <= 9; c++)
		{
			fin = b * c;

			if (c == 0)
				_putchar('0' + fin);
			else if (fin < 10)
			{
				_putchar(' ');
				_putchar('0' + fin);
			}
			else
			{
				_putchar('0' + (fin / 10));
				_putchar('0' + (fin % 10));
			}
			if (c < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
