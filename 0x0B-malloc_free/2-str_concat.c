#include "main.h"
#include <stdlib.h>

/**
 * str_concat:- A function thst concatenates two strings
 *
 * @s1: String 1
 * @s2: String 2
 *
 * Return: Pointer to the new string
 */

char *str_concat(char *s1, char *s2)
{
	char *newstr;
	int len1, len2, i, j;

	s1 == NULL ? s1 = "" : s1;
	s2 == NULL ? s2 = "" : s2;

	for (len1 = 0; s1[len1]; len1++)
		;
	for (len2 = 0; s2[len2]; len2++)
		;

	newstr = malloc(sizeof(char) * (len1 + len2 + 1));
	if (!newstr)
		return (NULL);

	for (i = 0; i < len1; i++)
		newstr[i] = s1[i];

	for (j = 0; j < len2; j++)
		newstr[i + j] = s2[j];

	newstr[i + j] = '\0';

	return (newstr);
}
