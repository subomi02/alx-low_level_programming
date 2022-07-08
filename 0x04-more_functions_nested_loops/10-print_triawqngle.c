#include "main.h"
/**
* print_triangle - print triangle with size var
*
* @a: size of triangle 
*/

void print_triangle(int a)
{
	if (a < 1)
		_putchar('\n');
	else
	{
		int b = 1;

		do {
			int c;

			for (c = 1; c <= a; c++)
			{
				if (c > (a - b))
					_putchar('#');
				else
					_putchar(' ');
			}

			_putchar('\n');
			b++;
		} while (b <= a);
	}
}
