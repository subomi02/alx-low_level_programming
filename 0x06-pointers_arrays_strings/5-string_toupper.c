#include "main.h"

/**
 * string_toupper - Function that reverses the content of an array of integers.
 * @str: s is the array
 */

char *string_toupper(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		if ((str[a] >= 97) && (str[a] <= 122))
		{
			str[a] = str[a] - 32;
		}
	a++;
	}
	return (str);
}
