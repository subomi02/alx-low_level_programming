#include <stdio.h>
#include <stdlib.h>
#include<string.h>
/**
*string_toupper - changes a string to uppercase
* @str:string
* Return: converted string
*/
char *string_toupper(char *str)
{
	return (strupr(str));
}
