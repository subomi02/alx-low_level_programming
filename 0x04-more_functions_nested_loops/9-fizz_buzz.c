#include <stdio.h>
#define stopVar 100

/**
* main - main function
* checks through numbers from 1 - 100
* and print number if it is not a multiple of 3 or 5
* print fizz if its a multiple of 3
* buzz if its a multiple of 5
* and fizz buzz if its both a multiple of 3 and 5
*
* Return: 0 if successful
*/

int main(void)
{
	int a = 1;

	do {
		if ((a % 3 == 0) && (a % 5 == 0))
			printf("FizzBuzz");
		else if (a % 3 == 0)
			printf("Fizz");
		else if (a % 5 == 0)
			printf("Buzz");
		else
			printf("%d", a);
		if (a != stopVar)
			printf(" ");
		a++;
	} while (a < stopVar + 1);
	printf("\n");

	return (0);
}
