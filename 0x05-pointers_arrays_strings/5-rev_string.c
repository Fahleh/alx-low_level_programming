#include "main.h"

/**
 * rev_string:- A function that reverses a string
 *
 * @s : The string to be reversed
 */

void rev_string(char *str)
{
	int i = 0;
	int j = 0;
	char temp;

	while (str[i])
		i++;

	while (i > j)
	{
		temp = str[--i];
		str[i] = str[j];
		str[j++] = temp;
	}
}
