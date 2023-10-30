#include "main.h"

char *_buffer(char *filename);
void _closefd(int fd);

/**
 * main - A program that copies the contents of a file to another file.
 *
 * @argc: Number of arguments supplied to the program.
 * @argv: Array of pointers to the arguments.
 *
 * Return: 0 on success.
 */

int main(int argc, char *argv[])
{
	int src, dest, rd, wrt;
	char *buff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp src dest\n");
		exit(97);
	}

	buff = _buffer(argv[2]);
	src = open(argv[1], O_RDONLY);
	rd = read(src, buff, 1024);
	dest = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (src == -1 || rd == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Failed to read file %s\n", argv[1]);
			free(buff);
			exit(98);
		}

		wrt = write(dest, buff, rd);
		if (dest == -1 || wrt == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Failed to write to %s\n", argv[2]);
			free(buff);
			exit(99);
		}

		rd = read(src, buff, 1024);
		dest = open(argv[2], O_WRONLY | O_APPEND);

	} while (rd > 0);

	free(buff);
	_closefd(src);
	_closefd(dest);

	return (0);
}

/**
 * _buffer - A functtion that allocates a fixed buffer size.
 *
 * @filename: File to creat buffer for.
 *
 * Return: Pointer to the buffer.
 */

char *_buffer(char *filename)
{
	char *buff;

	buff = malloc(sizeof(char) * 1024);

	if (buff == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}

	return (buff);
}

/**
 * _closefd - A function that Closes a file descriptor.
 *
 * @fd: File descriptor to close.
 */

void _closefd(int fd)
{
	int cls;

	cls = close(fd);

	if (cls == -1)
	{
		dprintf(STDERR_FILENO, "Error: Failed to close file %d\n", fd);
		exit(100);
	}
}
