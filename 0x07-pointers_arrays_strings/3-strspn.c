#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
*_strspn - function that locates a character in a string
*@s:string
*@accept:character to be located
*Return: pointer to the first occurence of character c in string s
*/
unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
