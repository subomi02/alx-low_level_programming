#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
*puts2 - prints the even numbers out of a string
*@str: string to be printed in evens
* Return: Always 0.
*/

void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
		str++;
	}
	putchar('\n');
}
