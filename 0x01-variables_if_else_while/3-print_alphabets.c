#include <stdio.h>

/**
 * main - A program prints the alphabet in lowercase,
 * then in uppercase. followed by a new line.
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int c = 97;

	while (c <= 122)
	/*Print the alphabet in lowercase*/
		putchar(c++);

	/* Reassign c to the uppercase string 'A' */
	c = 65;

	while (c <= 90)
	/* Print the alphabet in uppercase */
		putchar(c++);
	putchar('\n');

	return (0);
}
