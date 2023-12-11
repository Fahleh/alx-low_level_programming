#include "main.h"

/**
 * _memcpy:- A function that copies from one memory area to another.
 *
 * @dest: Pointer to the destination.
 * @src: Pointer to the source.
 *
 * @n: Number of bytes to copy.
 *
 * Return: pointer to the destination char*
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
