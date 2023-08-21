#include "main.h"

/**
 * puts_half:- A funcrtion that prints half of a string,
 * followed by a new line.
 *
 * @str: The string to be printed
 */

void puts_half(char *str)
{
	int str_length = 0;
	int i = 0;

	while (str[str_length])
		str_length++;

	i = (str_length % 2 == 0) ? str_length / 2 : (str_length + 1) / 2;

	while (str[i])
		_putchar(str[i++]);
	_putchar('\n');
}
