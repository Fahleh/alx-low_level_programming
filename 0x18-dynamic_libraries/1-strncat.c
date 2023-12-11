#include "main.h"

/**
 * _strncat:- A function that  concatenates two strings
 *
 * @dest:- Destination
 * @src:- Source
 * @n:- Max length of new string
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
