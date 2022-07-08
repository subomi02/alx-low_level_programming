#include "main.h"
#include <ctype.h>

/**
* _isdigit - causes an infinite loop
*@num:the number that is tested
* Return: 0
*/

int _isdigit(int num)
{

	if (isdigit(num))
		return (1);
	else
		return (0);
}

