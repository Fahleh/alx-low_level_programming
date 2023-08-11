#include <stdio.h>

/**
 * main - A program prints the alphabet in lowercase,
 * then in uppercase. followed by a new line.
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char	c = 'a';

	while (c <= 'z')
	/*Print the alphabet in lowercase*/
		putchar(c++);

	/* Reassign c to the uppercase string 'A' */
	c = 'A';

	while (c <= 'Z')
	/* Print the alphabet in uppercase */
		putchar(c++);
	putchar('\n');

	return (0);
}
