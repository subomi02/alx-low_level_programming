#include <stdio.h>
/**
* main - output all possible combination of two double digits
*
* Return: always 0 (success)
*/

int main(void)
{
	int b;
	int c;

	for (b = 0; b < 99; b++)
	{
		for (c = b + 1; c < 100; c++)
		{
		putchar((b / 10) + '0');
		putchar((b % 10) + '0');
		putchar(' ');
		putchar((c / 10) + '0');
		putchar((c % 10) + '0');
		if (b != 98)
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
