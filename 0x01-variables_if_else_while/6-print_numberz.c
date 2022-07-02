#include <stdio.h>
#include <stdlib.h>

/**
 * main - print all single digits in base 10
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int b;

	for (b = 0; b < 10; b++)
	{
		putchar((b % 10) + '0');
	}
	putchar('\n');
	return (0);
}
