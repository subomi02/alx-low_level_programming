#include <stdio.h>

/**
 * main - output all single digits of base 16 in lowercase
 *
 * Return: always 0 (sucess)
 */

int main(void)
{
	int b;
	char B;

	for (b = 0; b < 10; b++)
	{
		putchar((b % 10) + '0');
	}

	for (B = 'a'; B <= 'f'; b++)
	{
		putchar(B);
	}
	putchar('\n');
	return (0);
}
