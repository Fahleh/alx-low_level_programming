#include "main.h"

/**
 * _strlen:- A function that returns the length of a string.
 *
 * @s: Pointer to a string.
 *
 * Return: Length of the string.
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		++i;

	return (i);
}
