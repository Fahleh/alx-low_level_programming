#include <stdio.h>

/**
 * main:- A program that Prints the name of the file it was compiled from
 *
 * Return: 0 always
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
