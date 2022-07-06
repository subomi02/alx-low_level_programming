#include "main.h"

/**
*print_alphabet_x10 - this program prints the alphabet x10
*return 0
*/

void print_alphabet_x10(void)
{
	int b;
	int count;

	count = 0;

	while (count <= 9)
	{
		for (b = 'a'; b <= 'z'; b++)
		{
			_putchar(b);
		}
		_putchar('\n');
		count++;
	}
}
