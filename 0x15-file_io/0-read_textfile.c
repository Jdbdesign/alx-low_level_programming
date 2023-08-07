#include "main.h"
#include <stdlib.h>

/**
 * read_textfile -  Read a text file and print to STDOUT
 * @filename: Name of the text file to read
 * @letters: Number of letters to read and print.
 *
 * Return: The actual number of bytes read and printed, 0 if the fuction fails,
 * filename is NULL, or write fails.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t file_descriptor, bytes_read, bytes_written;

	if (!filename)
		return (0);

	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (!buf)
	{
		close(file_descriptor);
		return (0);
	}

	bytes_read = read(file_descriptor, buf, letters);
	if (bytes_read == -1)
	{
		free(buf);
		close(file_descriptor);
		return (0);
	}

	bytes_written = write(STDOUT_FILENO, buf, bytes_read);
	if (bytes_written == -1 || (size_t)bytes_written != bytes_read)
	{
		free(buf);
		close(file_descriptor);
		return (0);
	}

	free(buf);
	close(file_descriptor);
	return (bytes_written);
}
