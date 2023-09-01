#include "main.h"

/**
 * _strncat:- Concatenates two strings
 *
 * @dest: Destination string
 * @src: Source string
 *
 * @n: Number of bytes to concatenate
 *
 * Return: pointer to resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i]; i++)
		;
	for (j = 0; src[j] && j < n; j++)
		dest[i + j] = src[j];
	dest[i + j] = '\0';
	return (dest);
}
