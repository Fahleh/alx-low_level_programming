#include "main.h"

/**
 * create_file - A function that creates a file and writes some content to it
 *
 * @filename: Pointer to the file.
 * @text_content: Content to write into the file.
 *
 * Return: 1 on success, else -1.
 */


int create_file(const char *filename, char *text_content)
{
	int opn, i = 0, val = 1;

	if (!filename)
		return (-1);
	opn = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (opn == -1)
		return (-1);
	if (!text_content)
	{
		close(opn);
		return (1);
	}
	while (text_content[i])
		i++;
	val = write(opn, text_content, i);
	close(opn);
	if (val == -1 || val != i)
		return (-1);
	return (1);
}
