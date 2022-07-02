#include <stdio.h>

/**
 * main - prints all possible combination of two numbers
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int b;
	int c;

	for (b = 0; b < 9; b++)
	{
		for (c = b + 1; c < 10; c++)
		{
			putchar((b % 10) + '0');
			putchar((c % 10) + '0');

			if (b != 8)
			{
				putchar(',');
				putchar(' ');
			}
			else
				continue;
		}
	}
	putchar('\n');
	return (0);
}

