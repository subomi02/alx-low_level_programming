#include <stdio.h>
#include "main.h"

/**
 * print_array - prints the items in an array
 * @a: array to be printed
 * @n: number of element to print
 */

void print_array(int *a, int n)
{
	int b;

	for (b = 0; b < n; b++)
	{
		printf("%d", a[b]);
		if (b < n - 1)
			printf(", ");
	}
	putchar('\n');
}
