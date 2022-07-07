#include <stdio.h>
#define LARGEST 10000000000
/**
*main - Find and print the first 98 fibonacci numbers starting with 1 and 2.
*Return: always 0 (success)
*/

int main(void)
{
	unsigned long int a1 = 0, b1 = 1, A2 = 0, B2 = 2;
	unsigned long int c1, c2, c3;
	int counter;

	printf("%lu, %lu, ", b1, B2);
	for (counter = 2; counter < 98; counter++)
	{
		if (b1 + B2 > LARGEST || A2 > 0 || a1 > 0)
	{
			c1 = (b1 + B2) / LARGEST;
			c2 = (b1 + B2) % LARGEST;
			c3 = a1 + A2 + c1;
			a1 = A2, A2 = c3;
			b1 = B2, B2 = c2;
			printf("%lu%010lu", A2, B2);
		}
		else
		{
			c2 = b1 + B2;
			b1 = B2, B2 = c2;
			printf("%lu", B2);
		}
		if (counter != 97)
		printf(", ");
	}
	printf("\n");
	return (0);
}
