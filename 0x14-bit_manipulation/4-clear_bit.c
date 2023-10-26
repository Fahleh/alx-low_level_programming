#include "main.h"

/**
 * clear_bit - A function that sets the value of
 * a bit to 0 at a given index.
 *
 * @n: Pointer to the number
 * @index: Index of the bit
 *
 * Return: 1 on success, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
		return (-1);

	*n &= ~(1 << index);

	return (1);
}

