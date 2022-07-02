#include <stdio.h>

/**
 * main - prints the alphabet in lowercase and uppercase
 *
 * Return: always 0 (sucess)
 */

int main(void)
{
	char l;
	char L;

	for (l = 'a'; l <= 'z'; l++)
	{
		putchar(l);
	}
	for (L = 'A'; L <= 'Z'; L++)
	{
		putchar(L);
	}
	putchar('\n');
	return (0);
}
