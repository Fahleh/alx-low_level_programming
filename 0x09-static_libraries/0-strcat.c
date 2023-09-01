#include "main.h"

/**
 * _strcat:- Concatenates two strings
 *
 * @dest: Destination
 * @src: Source
 *
 * Return: pointer to resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i]; i++)
		;
	for (j = 0; src[j]; j++)
		dest[i + j] = src[j];
	dest[i + j] = '\0';
	return (dest);
}
