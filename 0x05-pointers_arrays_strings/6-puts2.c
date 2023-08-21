#include "main.h"

/**
 * puts2:- A function that prints every other character of
 *  string starting with the first.
 *
 * @str: The string to be printed
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
