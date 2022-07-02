#include <stdio.h>

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
		if (b >= 0 && b < 9)
		{
			putchar(',');
			putchar(' ');
		}
		else
			continue;
	}
	putchar('\n');
	return (0);
}
