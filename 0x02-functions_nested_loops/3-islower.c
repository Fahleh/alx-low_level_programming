#include <stdio.h>

/**
 * _islower:- A function that checks for lowercase characters
 *
 * @c:- variable to be checked
 * Return:- (1) if c is lowercase and (0) if otherwise
 */

int _islower(int c)
{
	return (c >= 97 && c <= 122);
}
