#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 *
 * Return: always 0 (sucess)
 */

int main(void)
{
	char l;

	for (l = 'a'; l <= 'z'; l++)
	{
		if (l == 'e' || l == 'q')
			continue;
		putchar(l);
	}
	putchar('\n');
	return (0);
}
