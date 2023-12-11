#include "main.h"

/**
 * _memset:- A function that fills memory with a constant byte
 *
 * @n: Number of bytes to fill
 * @s: Pointer to memory
 * @b: Bytes
 *
 * Return: a pointer to the memory
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
	s[i] = b;
	i++;
	}

	return (s);
}
