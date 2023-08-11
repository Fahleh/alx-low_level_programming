#include <stdio.h>

/**
 * main:- Entry point.
 *
 * Description:- A program that prints the alphabet in lowercase,
 * except q and e. followed by a new line.
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
	/*If variable c is not equal to the string 'q' and is not equal to 'e'*/
		if (c != 'q' && c != 'e')
			putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}
