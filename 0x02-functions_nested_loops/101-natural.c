#include <stdio.h>

/**
 * main - find sum of multiples of 3 and 5 less than 1024
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int a, fin;

	for (a = 3; a < 1024; a++)
	{
		if (a % 3 == 0 || a % 5 == 0)
			fin += a;
	}
	printf("%d\n", fin);
	return (0);
}
