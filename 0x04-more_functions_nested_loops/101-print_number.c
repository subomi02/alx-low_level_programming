#include "main.h"

/**
 * print_number - Prints a number
 * @a: The number to print
 */

void print_number(int a)
{
unsigned int num = a;
	if (a < 0)
	{
		_putchar('-');
		num = -num;
	}
	if (num > 9)
	{
		print_number(num / 10);
	}
	_putchar(num % 10 + '0');
}
