#include <string.h>
#include "main.h"

/**
* puts_half - print the last half of a string
* @s: pointer to the string variable
*/

void puts_half(char *str)
{
	int dis = strlen(str), a;

	if (dis % 2 == 0)
	{
		for (a = dis / 2; a < dis; a++)
			_putchar(str[a]);
	}
	else
		for (a = (dis / 2) + 1; a < dis; a++)
			_putchar(str[a]);

	_putchar('\n');
}
