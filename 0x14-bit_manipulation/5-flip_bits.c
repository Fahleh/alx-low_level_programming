#include "main.h"

/**
 * flip_bits - A function that returns the number of bits needed
 * to flip to get from one number to another.
 *
 * @n: First number
 * @m: Seconf number
 *
 * Return: Number of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int temp = n ^ m, count = 0;

	while (temp)
	{
		count++;
		temp &= temp - 1;
	}

	return (count);
}
