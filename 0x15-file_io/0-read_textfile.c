#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - A function that reads a text file and prints it
 * to POSIX stdout.
 *
 * @filename: Pointer to the file.
 * @letters: Letters to read and print.
 *
 * Return: Actual number of bytes the function can read and print,
 * or 0 if filename is NULL, can't be opened or if write fails.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	 ssize_t opn, rd, wrt;
	char *buff;

	if (filename == NULL)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (buff ==  NULL)
		return (0);

	opn = open(filename, O_RDONLY);
	rd = read(opn, buff, letters);
	wrt = write(STDOUT_FILENO, buff, rd);

	if (opn == -1 || rd == -1 || wrt == -1 || wrt != rd)
	{
		free(buff);
		return (0);
	}

	free(buff);

	close(opn);

	return (wrt);

}
