#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	int i;
	char c;
	long int li;
	long long int lli;
	float f;
	printf("Size of a char: %c byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of a int: %i byte(s)\n", (unsigned long)sizeof(i));
	printf("Size of a long int: %li byte(s)", (unsigned long)sizeof(li));
	printf("Size of a long long int: %lli byte(s)\n", (unsigned long)sizeof(lli));
	printf("Size of a float: %f byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}
