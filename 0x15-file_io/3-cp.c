#include "main.h"
#include <stdio.h>
#include <stdlib.h>

void close_file_dpt(int file_dpt);
char *make_buff(char *file);

/**
 * main - it copies the contents of a file to another file
 * @argc: Number of arguments provided to the program.
 * @argv: An array of pointers to arguments
 *
 * Return: 0 on success
 * Description: the argument count is incorrect - exit code 97
 *              file_from does not exist or cannot be read - exit code 98
 *              file_to cannot be created or written to - exit code 99
 *              file_to or file_from cannot be closed - exit code 100
 */
int main(int argc, char *argv[])
{
	char *buff;
	int from, to, rd, wt;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buff = make_buff(argv[2]);
	from = open(argv[1], O_RDONLY);
	rd = read(from, buff, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || rd == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buff);
			exit(98);
		}

		wt = write(to, buff, rd);
		if (to == -1 || wt == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buff);
			exit(99);
		}

		rd = read(from, buff, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (rd > 0);

	free(buff);
	close_file_dpt(from);
	close_file_dpt(to);

	return (0);
}



/**
 * make_buff - it gives 1024 bytes for a buffer
 * @file: the name of the file whose chars are kept in the buffer.
 * Return: Address to the newly-allocated buffer
 */
char *make_buff(char *file)
{
	char *buff;

	buff = malloc(sizeof(char) * 1024);

	if (buff == NULL)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", file);
		exit(99);
	}
	return (buff);
}


/**
 * close_file_dpt - it closes file descriptors
 * @file_dpt: file descriptor to close.
 */
void close_file_dpt(int file_dpt)
{
	int cs;

	cs = close(file_dpt);

	if (cs == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_dpt);
		exit(100);
	}
}

