#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* _strlen - prints the lenght of a string
*@s: string lenght to be found
* Return: Always 0.
*/

int _strlen(char *s)
{
	int a;

	a = 0;

	while (*s != '\0')
	{
		s++;
		a++;
	}
	return (a);
}
