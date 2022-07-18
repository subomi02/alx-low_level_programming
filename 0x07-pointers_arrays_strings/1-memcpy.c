#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
*_memcpy - function that copies memory area
*@n:number of bytes of memory area
*@s:first memory Area
*@b:second memory Area
*Return: pointer to s
*/
char *_memcpy(char *s, char *b, unsigned int n)
{
	return (memcpy(s, b, n));
}
