#include <stdio.h>

/**
 * main - prints the function name and a newline
 *
 * @argc: argument cont
 * @argv: arguments
 *
 * Return: Always 0
 */

int main(int argc, char **argv)
{
	int count;

	for (count = 0; count < argc; count++)
	{
		printf("%s\n", argv[count]);
	}
	return (0);
}
