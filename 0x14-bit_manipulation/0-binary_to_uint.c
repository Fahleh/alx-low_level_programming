#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - A function that converts a binary number
 * to an unsigned integer
 *
 * @b: Pointer to a string
 *
 * Return: The converted number, or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int n;

	if (b == NULL)
		return (0);

	for (n = 0; b && *b; b++)
	{
		if (*b != '0' && *b != '1')
			return (0);

		n <<= 1;
		n += *b - '0';
	}
	return (n);
}
