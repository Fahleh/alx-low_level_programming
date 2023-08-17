#include <stdio.h>

/**
 * main:- A program that prints the largest prime factor of the number 612852475143
 *
 * Description:- A prime factor is a factor is a prime number that
 * can only be divided by 1 and itself.
 *
 * Return: 0
 */

int main(void)
{
	long int n = 612852475143;
	long int i;

	for (i = 2; i < n; i++)
	{
		while (n % i == 0)
			n /= i;
	}

	printf("%ld\n", n);

	return (0);
}
