#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - A function that performs simple operations
 *
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: 0 on success, 98 on failure
 */

int main(int argc, char *argv[])
{
	int (*opr)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	opr = get_op_func(argv[2]);

	if (!opr)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", opr(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
