#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main -print the last digit of n
 *
 * Return: always 0 (success)
 */

int main(void)
{
	int n;
	int last;
	last= n % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (last < 6 && last != 0)
	{printf("Last digit of %d is %d and is less than 6 and not 0\n", n,last); }
	else if (last > 5)
	{printf("Last digit of %d is %d and is greater than 5\n", n,last); }
	else if (last == 0)
	{printf("Last digit of %d is %d and is 0\n", n,last); }
	return (0);
}
