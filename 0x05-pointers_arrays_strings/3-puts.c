#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
*_puts - prints to standard uotput using custom putchar
*@str: string to be printed
* Return: Always 0.
*/

void _puts(char *str)
{
	while (*str != '\0')
		_putchar(*str++);
	_putchar('\n');
}
