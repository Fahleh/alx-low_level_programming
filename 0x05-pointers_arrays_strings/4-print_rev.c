#include "main.h"

/**
 * print_rev:- A functio that prints a string in reverse
 *
 * @str: The string to be printed.
 *
 */


void print_rev(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;

	while (i--)
		_putchar(str[i]);
	_putchar('\n');
}
