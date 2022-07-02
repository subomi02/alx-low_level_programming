#include <stdio.h>

/**

*main - output  all possible combination of three numbers

*Return: always 0 (success)

*/

int main(void)

{

	int b;



	for (b = 0; b < 8; b++)

	{

		int c;

		for (c = b + 1; c < 9; c++)

		{

			int d;

			for (d = c + 1; d < 10; d++)

			{

			putchar((b % 10) + '0');

			putchar((c % 10) + '0');

			putchar((d % 10) + '0');



			if (b != 7)

			{

				putchar(',');

				putchar(' ');

			}

			else

				continue;

			}

		}

	}

	putchar('\n');



	return (0);

}
