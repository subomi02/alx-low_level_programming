#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
*_strncat - appends the content of second to first with limit to n
*@fir:first variable
*@sec:second variable
*@n:number of letters to be apprnded
* Return: the result of the combination
*/
char *_strncat(char *fir, char *sec, int n)
{
	return (strncat(fir, sec, n));
}
