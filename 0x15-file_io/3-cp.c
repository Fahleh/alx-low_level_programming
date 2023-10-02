#include "main.h"

/**
 * main - A program that copies the content of a file
 * to another file
 *
 * description: Copies the content of a file to another.
 *
 * @argc: Number of arguments
 * @argv: Array of pointers to arguments
 *
 * Return: 0 on success.
 */

int main(int argc, char *argv[])
{
	int src, dest, rd, wrt;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	src = open(argv[1], O_RDONLY);

	if (src == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	dest = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	if (dest == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	/*rd = read(src, buf, 1024);*/

	while ((rd = read(src, buf, 1024)) > 0)
	{
		wrt = write(dest, buf, rd);

		if (wrt == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}

	if (rd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	if (close(src) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", src);
		exit(100);
	}

	if (close(dest) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", dest);
		exit(100);
	}

	close(src);
	close(dest);

	return (0);
}
