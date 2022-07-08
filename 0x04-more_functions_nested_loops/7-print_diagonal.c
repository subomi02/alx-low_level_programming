#include "main.h"

/**
* print_diagonal - multiplies two numbers
* Return: 0
*/

void print_diagonal(int a)
{
	int b;
	
	if (a > 0)
	{
		for (b = 0; b < a; b++)
		{
			_putchar('\\');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
