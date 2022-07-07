#include <stdio.h>

/**
 * main - prints the first 50 fibonacci numbers
 *
 *  Return: 0 if successful
 */

int main(void)
{
	long int a1 = 1, final, b2 = 2, aLast = 50;
	int c;

	printf("%lu, %lu, ", a1, b2);
	for (c = 2; c < aLast; c++)
	{
		final = a1 + b2;
		a1 = b2;
		b2 = final;
		printf("%lu", final);
		if (c != aLast - 1)
			printf(", ");
	}
	printf("\n");
	return (0);
}
