#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
*_strpbrk - function that locates a character in a string
*@s:string
*@accept:character to be located
*Return: pointer to the first occurence of character c in string s
*/
char _strpbrk(char *s, char *accept)
{
	return (*strpbrk(s, accept));
}
