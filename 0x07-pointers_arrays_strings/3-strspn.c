#include "main.h"

/**
 * _strspn:- A function that gets the length of the prefix
 *
 * @s: String to be scanned.
 * @accept: String containing characters to match.
 *
 * Return: the number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	int z = 0, x, y;

	for (x = 0; s[x] != '\0'; x++)
	{
		if (s[x] != 32)
		{
			for (y = 0; accept[y] != '\0'; y++)
			{
				if (s[x] == accept[y])
					z++;
			}
		}
		else
			return (z);
	}
		return (z);

}
