#include "main.h"

/**
* print_line - print lines
* @a:number of lines printed
* Return: 0
*/

void print_line(int a)
{
	int b;

	if (a > 0)
	{
		for (b = 0; b < a; b++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
