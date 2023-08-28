#include "main.h"

/**
 * set_string:- A function that sets the value of a pointer to a char.
 *
 *
 * @s: Pointer to a set to another pointer
 * @to: Pointer to be set to.
 *
 * Return: Void.
 */

void set_string(char **s, char *to)
{
	*s = to;
}
