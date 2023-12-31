#include "main.h"

/**
 * leet:- A function that encodes a string into 1337
 *
 * @s:- String to encode
 *
 * Return: The pointer to the encoded string
 */

char *leet(char *s)
{
	int i, j;

	char *decoding = "aAeEoOtTlL";
	char *encoding = "4433007711";

	for (i = 0; s[i]; i++)
	{
		for (j = 0; decoding[j]; j++)
			if (s[i] == decoding[j])
				s[i] = encoding[j];
	}

	return (s);
}
