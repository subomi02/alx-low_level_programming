#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
*_strncpy - copies a string
*@fir:first variable
*@sec:second variable
*@n:number of letters to be apprnded
* Return: the result of the combination
*/
char *_strncpy(char *fir, char *sec, int n)
{
	return (strncpy(fir, sec, n));
}
