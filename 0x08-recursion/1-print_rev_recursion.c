#include "main.h"

/**
*_print_rev_recursion - Prints a string in reverse
*@s:string
*Return: always 0 (sucess).
*/

void _print_rev_recursion(char *s)
{
	if (*s == 0 || *s == '\0')
	{
		return;
	}

	_print_rev_recursion(s + 1);
	_putchar(*s);
}
