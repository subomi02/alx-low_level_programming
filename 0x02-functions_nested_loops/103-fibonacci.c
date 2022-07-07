#include <stdio.h>

/**
 * main - prints the sum of the even values of a Fibonacci
 *
 * Return: 0
 */

int main(void)
{
	int a = 1, b = 2, final = 0;
	int c;

	while (b < 4000000)
	{
		if (b % 2 == 0)
			final += b;

		c = b;
		b += a;
		a = c;
	}
	printf("%d\n", final);
	return (0);
}
