#include <stdio.h>
/**
 * main:- A program that prints the alphabet in reverse (in lowercase)
 * using putchar
 *
 * Return: 0 (Success)
 */
int main(void)
{
	char a = 122;

	while (a >= 97)
		putchar(a--);
	putchar('\n');

	return (0);
}
