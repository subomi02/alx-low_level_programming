#include "main.h"

/**
* sqrt2 - Makes possible to evaluate from 1 to n
* @a: same number as n
* @b: number that iterates from 1 to n
*
* Return: Always 0.
*/
int sqrt2(int a, int b)
{
	if (b * b == a)
		return (b);
	else if (b * b > a)
		return (-1);
	return (sqrt2(a, b + 1));
}

/**
* _sqrt_recursion - returns the natural square root of n
* @n: Number
*
* Return: Always 0.
*/
int _sqrt_recursion(int n)
{
	return (sqrt2(n, 1));
}
