#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - that reads a text file and prints
 * @filename: variable pointer
 * @letter: size letters
 * Description: Write a function that reads a text file and prints it
 * to the posix standard output.
 * Return: the actual number of letters it could read and print, 0 otherwise
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_desc = 0;
	int ch_printed = 0;
	int status_wr = 0;
	char *buffer;

	if (!filename)
		return (0);

	file_desc = open(filename, O_RDONLY);

	if (file_desc == -1)
	{
		return (0);
	}

	buffer = malloc(letters * sizeof(char));

	if (!buffer)
		return (0);

	ch_printed = read(file_desc, buffer, letters);
	status_wr = write(STDOUT_FILENO, buffer, ch_printed);

	if (status_wr < 0)
		return (0);

	free(buffer);
	close(file_desc);
	return (ch_printed);
}
