#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat:- A function that concatenates two strings
 *
 * @s1: String 1
 * @s2: String 2
 * @n: Number of bytes to concatenate
 *
 * Return: A pointer to concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	unsigned int i, j, len1, len2;

	s1 == NULL ? s1 = "" : s1;
	s2 == NULL ? s2 = "" : s2;

	for (len1 = 0; s1[len1]; len1++)
		;
	for (len2 = 0; s2[len2]; len2++)
		;

	n >= len2 ? n = len2 : n;

	result = malloc(sizeof(char) * (len1 + n + 1));
	if (result == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		result[i] = s1[i];
	for (j = 0; j < n; j++)
		result[i + j] = s2[j];

	result[i + j] = '\0';
	return (result);
}
