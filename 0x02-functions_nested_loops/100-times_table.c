#include "main.h"

/**
 * print - function to print using _putchar
 * @out: value to be printed out
 */
void print(int out)
{
	if (out / 10)
		print(out / 10);
	_putchar('0' + (out % 10));
}
/**
 * print_times_table - prints the n times table, starting with 0
 * @a: time table to print
 */

void print_times_table(int a)
{
	int b, c, fin;

	if (a < 0 || a > 15)
		return;
	for (b = 0; b <= a; b++)
	{
		for (c = 0; c <= n; c++)
		{
			fin = b * c;
			if (c == 0)
				_putchar('0' + fin);
			else if (fin < 10)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + fin);
			}
			else if (fin < 100)
			{
				_putchar(' ');
				print(fin);
			}
			else
			{
				print(fin);
			}
			if (c < a)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
