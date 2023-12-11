#include "main.h"

/**
 * _strpbrk:- A function that searches a string for any of a set of bytes
 *
 * @s: First occurrence of character.
 * @accept: String to be matched.
 *
 * Return: A pointer to the byte
 */

char *_strpbrk(char *s, char *accept)
{
	int i;
		while (*s)
		{
			for (i = 0; accept[i]; i++)
			{
				if (*s == accept[i])
					return (s);
			}
			s++;
		}
	return (NULL);
}
