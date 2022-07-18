#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
*_memset - function that fills memory with constant byte
*@n:number of bytes of memory area to be filled
*@s:pointer
*@b:constant byte
*Return: pointer to the memory area s
*/
char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}
