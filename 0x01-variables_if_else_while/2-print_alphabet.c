#include <stdio.h>

/**
 * main:- Entry point
 * Description:- A program that prints the alphabet in lowercase,
 * followed by a new line.
 *
 * Return: Success (0)
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
		putchar(c++);
	putchar('\n');

	return (0);
}
