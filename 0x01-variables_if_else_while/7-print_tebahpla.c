#include <stdio.h>

/**
 * main - prints the alphabet in lowercase backwards
 *
 * Return: always 0 (sucess)
 */

int main(void)
{
	char l;

	for (l = 'z'; l >= 'a'; l--)
	{
		putchar(l);
	}
	putchar('\n');
	return (0);
}
