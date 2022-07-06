#include

/**
 * print_last_digit - prints last digit
 *
 * @b: input
 *
 * Return: **
 */

int print_last_digit(int b)
{
	int final;

	if (b < 0)
		final = -1 * (b % 10);
	else
		final = b % 10;

	_putchar ((final) + '0');

	return (final);
}
