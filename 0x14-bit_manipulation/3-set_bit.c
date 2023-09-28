#include "main.h"

/**
 * set_bit - A function that sets the value of a
 * bit to 1 at a given index.
 *
 * @n: Pointer to the number to check
 * @index: index of the bit to set
 *
 * Return: 1on success, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (!n)
		return (-1);

	if (index > sizeof(unsigned long int) * 8)
		return (-1);

	*n |= 1 << index;

	return (1);
}
