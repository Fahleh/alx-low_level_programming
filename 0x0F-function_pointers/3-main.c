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
	int x, y;
	int result;
	int (*op_func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}


	x = atoi(argv[1]);
	y = atoi(argv[3]);


	if ((argv[2][0] == '/' || argv[2][0] == '%') && y == 0)
	{
		printf("Error\n");
		exit(100);
	}

	op_func = get_op_func(argv[2]);
	if (op_func == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	result = op_func(x, y);
	printf("%d\n", result);

	return (0);
}
