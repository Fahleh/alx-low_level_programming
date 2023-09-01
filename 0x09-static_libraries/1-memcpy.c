#include "main.h"
#include <stdio.h>

/**
 * _memcpy:- Copies from a memory area src to memory area dest
 *
 * @dest: Pointer to the destination
 * @src: Pointer to the source
 * @n: Number of bytes to copy
 *
 * Return: pointer to the destination char*
 */


char *_memcpy(char *dest, char *src, unsigned int n)
{
	if (!dest || !src)
		return (NULL);

	while (n--)
		*(dest + n) = *(src + n);

	return (dest);
}
