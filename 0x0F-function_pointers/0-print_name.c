#include "function_pointers.h"

/**
 * print_name - A function that prints a name
 *
 * @name: Name to print
 * @f: Function pointer
 *
 * Return: Void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
