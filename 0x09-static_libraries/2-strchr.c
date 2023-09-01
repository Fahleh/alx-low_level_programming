#include "main.h"

/**
 * _strchr:- Locates a character in a string
 *
 * @s: String
 * @c: Character
 *
 * Return: Pointer to the first occurrence of c in the string s,
 * or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *) &s[i]);
		i++;
	}
	if ((char) !c)
		return ((char *) &s[i]);
	return (0);
}
