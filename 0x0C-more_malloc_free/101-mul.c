#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * is_digit - sees if a string contains a non-digit char
 * @ab: string
 *
 * Return: 0 if a non-digit is found, 1 otherwise
 */
int is_digit(char *ab)
{
	int i = 0;

	while (ab[i])
	{
		if (ab[i] < '0' || ab[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/**
 * _strlen - print length of a string
 * @ab: string to evaluate
 *
 * Return: the length of the string
 */
int _strlen(char *ab)
{
	int i = 0;

	while (ab[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * errors - handles errors
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - multiply two positive numbers
 * @argc: number of argument
 * @argv: array of argument
 *
 * Return: always 0 (Success)
 */
int main(int argc, char *argv[])
{
	char *ab1, *ab2;
	int len1, len2, len, i, carry, digit1, digit2, *result, a = 0;

	ab1 = argv[1], ab2 = argv[2];
	if (argc != 3 || !is_digit(ab1) || !is_digit(ab2))
		errors();
	len1 = _strlen(ab1);
	len2 = _strlen(ab2);
	len = len1 + len2 + 1;
	result = malloc(sizeof(int) * len);
	if (!result)
		return (1);
	for (i = 0; i <= len1 + len2; i++)
		result[i] = 0;
	for (len1 = len1 - 1; len1 >= 0; len1--)
	{
		digit1 = ab1[len1] - '0';
		carry = 0;
		for (len2 = _strlen(ab2) - 1; len2 >= 0; len2--)
		{
			digit2 = ab2[len2] - '0';
			carry += result[len1 + len2 + 1] + (digit1 * digit2);
			result[len1 + len2 + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			result[len1 + len2 + 1] += carry;
	}
	for (i = 0; i < len - 1; i++)
	{
		if (result[i])
			a = 1;
		if (a)
			_putchar(result[i] + '0');
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}
