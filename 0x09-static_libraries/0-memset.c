#include "main.h"

/**
 * _memset:- Fills memory with a constant byte
 *
 * @s: Pointer
 * @b: Constant byte
 * @n: Number of bytes to fill
 *
 * Return: Pointer to the memory area
 */

char *_memset(char *s, char b, unsigned int n)
{
	while (n--)
		*(s + n) = b;
	return (s);
}
