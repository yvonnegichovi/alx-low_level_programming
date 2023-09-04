#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * creat_buf - creates and  allocates 1024 bytes
 * @filename: name of the file that buffer is storing the chars for
 * Return: a pointer ro the newly_allocated buffer
 */

char *creat_buf(char *filename)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
	return (buffer);
}

/**
 * close_filename - closes the fd
 * @fd: file descriptor closed
 */

void close_filename(int fd)
{
	int b;

	b = close(fd);

	if (b == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - copies the content of a file to another file
 * @argc: number of arguements
 * @argv: an array of pointers to the arguments
 * Return: 0 success
 */

int main(int argc, char *argv[])
{
	int file_from, file_to, bytes_read, bytes_written;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = creat_buf(argv[2]);
	file_from = open(argv[1], O_RDONLY);
	bytes_read = read(file_from, buffer, 1024);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (file_from == -1 || bytes_read == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}
		bytes_written = write(file_to, buffer, bytes_read);
		if (file_to == -1 || bytes_written == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
		bytes_read = read(file_from, buffer, 1024);
		file_to = open(argv[2], O_WRONLY | O_APPEND);
	} while (bytes_read > 0);
	free(buffer);
	close_filename(file_from);
	close_filename(file_to);
	return (0);
}
