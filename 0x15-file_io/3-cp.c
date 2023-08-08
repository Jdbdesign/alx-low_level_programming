#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *allocate_buffer(char *file);
void close_description(int fd);

/**
 * allocate_buffer - Allocates 1024 bytes for a buffer.
 * @file: The name of the file buffer is storing chars for.
 *
 * Return: A pointer to the newly-allocated buffer.
 */
char *allocate_buffer(char *file)
{
	char *buff;

	buff =  malloc(sizeof(char) * 1024);

	if (buff == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buff);
}

/**
 * close_descriptor -  Closes file descriptors.
 * @desc: The file descriptor to be closed.
 */
void close_descriptor(int desc)
{
	int status;

	status =  close(desc);

	if (status == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", desc);
		exit(100);
	}
}

/**
 * main - Copies the contents of a file to another file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 * Description: If tyhe argument count is incorrect - exit code 97
 * If file_from does not exist or cannot be read -  exit code 98.
 * If file_to cannot be created or written to -  exit code 99.
 * If file_to or file_from cannot be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
	int src, dest, r, w;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_file file_to\n");
		exit(97);
	}

	buffer =  allocate_buffer(argv[2]);
	src = open(argv[1], O_RDONLY);
	dest = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	while ((r = read(src, buffer,  1024)) > 0)
	{
		if (src == -1 || r == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		w = write(dest, buffer, r);
		if (dest == -1 || w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n",  argv[2]);
			free(buffer);
			exit(99);
		}
	}

	free(buffer);
	close_descriptor(src);
	close_descriptor(dest);

	return (0);
}
