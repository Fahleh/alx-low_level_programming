#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * isNumber:- A function that checks if a string is a number
 *
 * @s: String
 *
 * Return: 1 if number, 0 otherwise
 */

int isNumber(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
		if (s[i] < '0' || s[i] > '9')
			return (0);
	return (1);
}

/**
 * print_result:- Function that prints the result of the multiplication
 *
 * @result: Array
 * @len: Length of resulting array
 *
 * Return: Void
 */

void print_result(int *result, int len)
{
	int i;

	for (i = 0; i < len && result[i] == 0; i++)
		;

	if (i == len)
		printf("0");

	for (; i < len; i++)
		printf("%d", result[i]);

	printf("\n");
}

/**
 * main:- Function that multiplies two positive numbers
 *
 * @ac: Number of arguments
 * @av: Array
 *
 * Return: 0
 */

int main(int ac, char **av)
{
	int i, j;
	int len1, len2;
	int *result;

	if (ac != 3 || !isNumber(av[1]) || !isNumber(av[2]))
	{
		printf("Error\n");
		exit(98);
	}

	len1 = strlen(av[1]);
	len2 = strlen(av[2]);

	result = calloc(len1 + len2, sizeof(int));
	if (result == NULL)
	{
		printf("Error\n");
		exit(98);
	}

	for (i = len1 - 1; i >= 0; i--)
	{
		for (j = len2 - 1; j >= 0; j--)
		{
			int mul = (av[1][i] - '0') * (av[2][j] - '0');

			int sum = result[i + j + 1] + mul;

			result[i + j] += sum / 10;
			result[i + j + 1] = sum % 10;
		}
	}

	print_result(result, len1 + len2);
	free(result);

	return (0);
}
