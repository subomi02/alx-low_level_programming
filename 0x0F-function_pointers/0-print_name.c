#include <stdio.h>

/**
 * print_name - prints a name
 * @name: name of the person
 *@f: Function Pointer
 *
 * Return: Nothing.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}

