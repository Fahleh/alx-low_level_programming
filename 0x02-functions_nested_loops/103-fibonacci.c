#include <stdio.h>

/**
 * main:- A program that  prints the sum of the even-valued terms of the
 * Fibonacci sequence whose values do not exceed 4 million.
 *
 * Return: Success (0)
*/

int main(void)
{
	unsigned long prev = 0;
	unsigned long current = 1;
	unsigned long sum = 0;
	unsigned long next;

	while (current <= 4000000)
	{
		next = prev + current;
		prev = current;
		current = next;
		if (current % 2 == 0)
			sum += current;
	}
	printf("%lu\n", sum);

	return (0);
}
