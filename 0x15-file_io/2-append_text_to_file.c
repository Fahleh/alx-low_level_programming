#include "main.h"

/**
 * append_text_to_file - A function that appends text to the end of a file
 *
 * @filename: Pointer to file.
 * @text_content: Content to write to the file
 *
 * Return: On success return 1, else -1.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int opn, i = 0, val = 1;

	if (!filename)
		return (-1);
	opn = open(filename, O_WRONLY | O_APPEND);
	if (opn == -1)
		return (-1);
	if (!text_content)
	{
		close(opn);
		return (1);
	}
	while (text_content[i])
	{
		i++;
	}
	val = write(opn, text_content, i);
	close(opn);
	if (val == -1)
		return (-1);

	return (1);
}
