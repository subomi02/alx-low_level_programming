#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
*_strstr - function that locates a substring
*@haystack:string
*@needle:substring to be located
*Return: pointer to the first occurence f the substring
*/
char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
