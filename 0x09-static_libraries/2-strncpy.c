#include "main.h"

/**
 * _strncpy:- Copies a string
 *
 * @dest: Destination
 * @src: Source
 * @n: Number of bytes
 *
 * Return: Pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] && i < n; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
