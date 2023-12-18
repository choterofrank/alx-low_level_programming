#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: Name of the file to append.
 * @text_content: String to be add to the end of the file.
 *
 * Return: 1 on success and -1 on failure
 *         If file does non-existant or user is denied write permissions - -1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int op, wt, lg = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (lg = 0; text_content[lg];)
			lg++;
	}

	op = open(filename, O_WRONLY | O_APPEND);
	wt = write(op, text_content, lg);

	if (op == -1 || wt == -1)
		return (-1);

	close(op);

	return (1);
}

