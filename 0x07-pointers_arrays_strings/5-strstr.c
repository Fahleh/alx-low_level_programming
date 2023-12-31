#include "main.h"

/**
 * _strstr:- A function that locates a substring.
 *
 * @haystack: String to be searched.
 * @needle: String to be matched.
 *
 * Return: A pointer to the beginning of the located substring, or NULL.
*/

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i]; i++)
	{
		for (j = 0; needle[j] && haystack[i + j]; j++)
			if (haystack[i + j] != needle[j])
				break;
		if (!needle[j])
			return (haystack + i);
	}
	return (NULL);
}
