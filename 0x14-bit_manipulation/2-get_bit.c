#include "main.h"

/**
 * get_bit - A function that returns the value
 * of a bit at a given index
 *
 * @n: Number to check
 * @index: Index of bit to print
 *
 * Return: The value of the bit at given index or
 * -1 if an error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);

	return ((n >> index) & 1);
}
