#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
*_strchr - function that locates a character in a string
*@s:string
*@c:character to be located
*Return: pointer to the first occurence of character c in string s
*/
char *_strchr(char *s, char c)
{
	return (strchr(s, c));
}
