#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Display text file content on STDOUT.
 * @filename: text file undergoing reading
 * @letters: Number of letters for reading
 * Return: w- precise quantity of bytes read and displayed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}
