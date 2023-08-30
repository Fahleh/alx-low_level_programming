#include "main.h"

/**
 * _check_sqrt:- Helper function that checks for the square root
 *
 * @n: Nunber
 * @i: Number
 *
 * Return: The natrual sqaure root of n
 */

int _check_sqrt(int i, int n)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (_check_sqrt(i + 1, n));
}

/**
 * _sqrt_recursion:- A function that returns the natural
 * square root of a number
 *
 * @n: Number
 *
 * Return: The natural square root or -1
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (check(1, n));
}
