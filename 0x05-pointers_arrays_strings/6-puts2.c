#include "main.h"

/**
*puts2 - prints out a string
*@str: string to be printed
* Return: Always 0.
*/

void puts2(char *str)
{
	int num = 0;

	while (str[num] != '\0')
	{
		if (num % 2 == 0)
		{
			_putchar(str[num]);
		}
		num += 1;
	}
	_putchar('\n');
}
