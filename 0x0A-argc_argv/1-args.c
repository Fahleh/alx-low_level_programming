#include <stdio.h>

/**
 * main:- A program that prints the number of arguments
 * passed into it
 *
 * @argc: Number of arguments
 * @argv: Array of arguments
 *
 * Return: 0
 */

int main(int argc, char **argv)
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
