#include "main.h"

/**
 * _strchr:- A function that locates a character in a string.
 *
 * @s: String to check
 * @c: Character to find
 *
 * Return: Pointer to the first occurrence of c, or NULL.
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
}
