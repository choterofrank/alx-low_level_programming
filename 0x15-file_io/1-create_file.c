#include "main.h"

/**
 * create_file - it creates a file.
 * @filename: name of file to create.
 * @text_content: pointer to the string to write to a file.
 *
 * Return: If the function fails - -1,Or - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int fdpt, wt, lg = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (lg = 0; text_content[lg];)
			lg++;
	}

	fdpt = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wt = write(fdpt, text_content, lg);

	if (fdpt == -1 || wt == -1)
		return (-1);

	close(fdpt);

	return (1);
}

