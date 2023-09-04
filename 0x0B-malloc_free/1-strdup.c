#include "main.h"
#include <stdlib.h>

/**
 * _strdup:- A function that returns a pointer to
 * a newly allocated space in memory
 *
 * @str: String
 *
 * Return: Pointer to the copied string
 */


char *_strdup(char *str)
{
	char *copy;
	int i, len;

	if (!str)
		return (NULL);

	for (len = 0; str[len]; len++)
		;

	copy = malloc(sizeof(char) * (len + 1));
	if (!copy)
		return (NULL);

	for (i = 0; i < len; i++)
		copy[i] = str[i];
	copy[i] = '\0';

	return (copy);
}
