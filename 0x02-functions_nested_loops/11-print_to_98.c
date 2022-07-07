#include "main.h"

/**
 * print - outputs variable with _putchar
 *
 * @a: variable to print
 */

void print(int a);

/**
 * print_to_98 - print all natural numbers from input to 98
 *
 * @input: starting number
 */

void print_to_98(int input)
{
	int limit = 98;

	if (input > limit)
	{
		int b;

		for (b = input; b >= limit; b--)
		{
			print(b);
			if (b != limit)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	else
	{
		int c;

		for (c = input; c <= limit; c++)
		{
			print(c);
			if (c != limit)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
	_putchar('\n');
}

/**
 * print - prints output
 * @a: input
 */

void print(int a)
{
	if (a < 0)
	{
		_putchar('-');
		a = -a;
	}
	if (a / 10)
		print(a / 10);
	_putchar(a % 10 + '0');
}
