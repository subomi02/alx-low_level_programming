#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - sum all the numbers passed to a function
 * @n: the first integer passed
 * Return: the sum of the numbers
 */

int sum_them_all(const unsigned int n, ...)
{
	int f = 0, fin;

	unsigned int i;

	va_list exmp;

	va_start(exmp, n);

	for (i = 0; i < n; i++)
	{
		fin = va_arg(exmp, int);

		f += fin;
	}
	va_end(exmp);

	return (f);
}
