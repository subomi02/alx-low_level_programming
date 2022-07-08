#include "main.h"
#include <ctype.h>

/**
* _isupper - causes an infinite loop
*@a:the letter that is tested
* Return: 0
*/

int _isupper(int a)
{

	if (isupper(a))
		return (1);
	else
		return (0);
}

