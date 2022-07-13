#include <string.h>
#include "main.h"
/**
* print_rev - print a string in reverse order
* @str: string to be reversed
*/

void print_rev(char *str)
{
	int num, len = strlen(str);

	for (num = len - 1; num >= 0; num--)
		_putchar(str[num]);

	_putchar('\n');
}
