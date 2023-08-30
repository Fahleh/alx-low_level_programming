#include "main.h"

/**
 * _checker:- Checks if two strings are identical.
 *
 * @s1: String 1
 * @s2: String 2
 *
 * @i: Left index.
 * @j: Special index.
 *
 * Return: 1 if s is palindrome, 0 otherwise.
 */

int _checker(char *s1, char *s2, int i, int j)
{
	if (s1[i] == '\0' && s2[j] == '\0')
		return (1);
	if (s1[i] == s2[j])
		return (_checker(s1, s2, i + 1, j + 1));
	if (s1[i] == '\0' && s2[j] == '*')
		return (_checker(s1, s2, i, j + 1));
	if (s2[j] == '*')
		return (_checker(s1, s2, i + 1, j) || _checker(s1, s2, i, j + 1));
	return (0);
}


/**
 * wildcmp:- A function that compares two strings and returns 1 if
 * they can be considered identical, otherwise return 0
 *
 * @s1: String 1.
 * @s2: String 2.
 *
 * Return: 1 if are considered identical.
 */

int wildcmp(char *s1, char *s2)
{
	return (_checker(s1, s2, 0, 0));
}
