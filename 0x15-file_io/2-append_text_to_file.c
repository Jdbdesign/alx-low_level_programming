#include "main.h"

/**
 * append_text_to_file - Appends text at the conclusion of the file
 * @filename: A pointer to be designation of the file
 * @text_content: The string to append  to the last of the file
 *
 * Return: If the function fails or filename is NULL - -1
 * if the file does not exit or the user lack write permissions- otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len])
			len++;
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	w = write(fd, text_content, len);
	if (w == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);

	return (1);
}
