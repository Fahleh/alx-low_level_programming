#include "main.h"

/**
 * _strlen_recursion:- Returns the length of a string
 *
 * @s: String to check
 *
 * Return: Length of the string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * _palindrome_checker:- A function that checks if
 * a string is a palindrome
 *
 * @s: string to check
 * @l: length of string
 *
 * Return: 1 if string is palindrome, 0 if not
 */

int _palindrome_checker(char *s, int l)
{
	if (l <= 1)
		return (1);
	if (*s != *(s + l - 1))
		return (0);
	return (_palindrome_checker(s + 1, l - 2));
}

/**
 * is_palindrome:- Checks if a string is a palindrome
 *
 * @s: String
 *
 * Return: 1 if palindrome, 0 if not
 */

int is_palindrome(char *s)
{
	int l = 0;

	if (*s == '\0')
		return (1);
	l = _strlen_recursion(s);
	return (_palindrome_checker(s, l));
}
