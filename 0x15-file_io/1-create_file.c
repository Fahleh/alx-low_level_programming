#include "main.h"

/**
 * create_file - A function that creates a file
 *
 * @filename: File to create
 * @text_content: NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int opn, len, wrt;

	if (filename == NULL)
		return (-1);

	opn = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (opn == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(opn);
		return (1);
	}

	for (len = 0; text_content[len]; len++);

	wrt = write(opn, text_content, len);
	if (wrt == -1)
	{
		close(opn);
		return (-1);
	}

	close(opn);
	return (1);
}
