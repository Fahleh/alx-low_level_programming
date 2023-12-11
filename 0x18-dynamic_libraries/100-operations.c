#include <stdio.h>

int add(int, int);
int sub(int, int);
int mul(int, int);
int div(int, int);
int mod(int, int);

/**
 * add - Adds two numbers
 * @a: First number
 * @b: Second number
 *
 * Return: a + b
 */

int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - Difference between two numbers
 * @a: First number
 * @b: Second number
 *
 * Return: a - b
 */

int sub(int a, int b)
{
	return (a - b);
}

/**
 * mul - Product of two numbers
 * @a: First number
 * @b: Second number
 *
 * Return: a * b
 */

int mul(int a, int b)
{
	return (a * b);
}

/**
 * div - Divides two numbers
 * @a: First number
 * @b: Second number
 *
 * Return: a / b
 */

int div(int a, int b)
{
	if (b == 0)
	{
		fprintf(stderr, "Division by zero\n");
		return (0);
	}
	return (a / b);
}

/**
 * mod - Modulus of two numbers
 * @a: First number
 * @b: Second number
 *
 * Return: a % b
 */
int mod(int a, int b)
{
	if (b == 0)
	{
		fprintf(stderr, "Division by zero\n");
		return (0);
	}
	return (a % b);
}
