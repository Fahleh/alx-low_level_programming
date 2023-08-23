#include "main.h"

/**
 * string_toupper:- A function that changes lowercase letters
 * to uppercase.
 *
 * @s:- String
 *
 * Return: The string
 */

char *string_toupper(char *s)
{

	int i;

i = 0;
	while (*(s + i))
	{
		if (*(s + i) >= 'a' && *(s + i) <= 'z')
			*(s + i) -= 'a' - 'A';
		i++;
	}
	return (s);
}
