#include <stdio.h>

/**
 * main - print all single digits in base 10
 *
 * Return: always 0 (success)
 */

int main(void)
{
	char b;

	for (b = 0; b < 10; b++)
	{
		printf("%d", b);
	}
	putchar('\n');
	return (0);
}
