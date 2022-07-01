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
	printf("Size of a char: %c byte(s)\n", sizeof(c));
	printf("Size of a int: %i byte(s)\n", sizeof(i));
	printf("Size of a long int: %li byte(s)\n", sizeof(li));
	printf("Size of a long long int: %lli byte(s)\n", sizeof(lli));
	printf("Size of a float: %f byte(s)\n", sizeof(f));
	return (0);
}
