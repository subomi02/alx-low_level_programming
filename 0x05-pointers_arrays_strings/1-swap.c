#include <stdio.h>
#include <stdlib.h>

/**
*swap_int - swaps the values of two numbers
*@a: first  variable
*@b: second variable
* Return: Always 0.
*/

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
