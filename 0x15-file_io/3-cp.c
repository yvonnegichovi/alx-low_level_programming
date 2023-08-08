#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * creat_buf - Allocates 1024 bytes for a buffer
 * @filename: the file in which buffer is storing the chars
 * Return: pointer to the newly-allocated buffer
 */

char *creat_buf(char *filename)
{
	char *buf;

	buf = malloc(sizeof(char) * 1024);

	if (buf == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
	return (buf);
}

/**
 * main - copies the content of a file to another file
 * @argc: number of arguements passed in the program
 * @argv: an array of pointers to the arguements
 * Return: 0 (Success)
 * Description: if number of argument is not the correct- exit code 97
 * if filename doesn't exist or can't read - exit code 98
 * if cannot create or write to filename - exit code 99
 * if you cannot close a file descriptor - exit code 100
 */

int main(int argc, char *argv[])
{
	char *buf;
	int from, to, i, j;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buf = creat_buf(argv[2]);
	from = open(argv[1], O_RDONLY);
	i = read(from, buf, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || i == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't read from file %s\n", argv[1]);
			free(buf);
			exit(98);
		}

		j = write(to, buf, i);
		if (to == -1 || j == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't write to %s\n", argv[2]);
			free(buf);
			exit(99);
		}

		i = read(from, buf, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);
	} while (i > 0);
	free(buf);
	close_filename(from);
	close_filename(to);

	return (0);
}

/**
 * close_filename - closes the file descriptors
 * @fd: file descriptor
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
