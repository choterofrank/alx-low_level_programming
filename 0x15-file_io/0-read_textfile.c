#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- reads a text file and prints it to STDOUT.
 * @filename: the text file to be read
 * @letters: the numb of letters to read in the textfile
 * Return: w- actual number of bytes read and displayed
 *        0 function fails or filename is NULL
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fdpt;
	ssize_t r;
	ssize_t wt;
	char *buff;

	fdpt = open(filename, O_RDONLY);
	if (fdpt == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	r = read(fdpt, buff, letters);
	wt = write(STDOUT_FILENO, buff, r);

	free(buff);
	close(fdpt);
	return (wt);
}

