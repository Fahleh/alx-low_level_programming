#include "main.h"

/**
 * _prime_helper:- A helper function for is_prime_number
 * 
 * @n: Number
 * @i: Number
 *
 * Return: 1 if n is a prime number, otherwise 0
 */

int _prime_helper(int n, int i)
{
	if (i == n)
		return (1);
	if (n % i == 0)
		return (0);
	return (prime_helper(n, i + 1));
}

/**
 * is_prime_number:- A function that returns 1 if
 * the input integer is a prime number
 * otherwise return 0
 *
 * @n: Number
 *
 * Return: 1 if n is a prime number, otherwise 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_helper(n, 2));
}
