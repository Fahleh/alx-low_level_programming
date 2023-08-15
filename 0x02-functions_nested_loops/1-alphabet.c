#include <stdio.h>

/**
 * print_alphabet:- A program that prints the alphabet, in lowercase,
 * followed by a new line
 *
 * Return:- void
*/
void	print_alphabet(void)
{
	int c;

	c = 97;
	while (c <= 122)
	{
		putchar(c);
		c++;
	}
	putchar('\n');
}

int main(void)
{
	print_alphabet();
	return (0);
}
