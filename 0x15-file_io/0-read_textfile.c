#include "main.h"

/**
 * read_textfile - A function that reads a text file and
 * prints it to the POSIX standard output
 *
 * @filename: File to read
 * @letters: Number of letters to read and print
 *
 * Return: Number of letters read and printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t opn, rd, wrt;

	if (filename == NULL)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf ==  NULL)
		return (0);

	opn = open(filename, O_RDONLY);
	rd = read(opn, buf, letters);
	wrt = write(STDOUT_FILENO, buf, rd);

	if (opn == -1 || rd == -1 || wrt == -1 || wrt != rd)
	{
		free(buf);
		return (0);
	}

	free(buf);
	close(opn);

	return (wrt);

}
