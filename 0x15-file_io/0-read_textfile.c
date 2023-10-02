#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

/**
 * read_textfile - reads a text file and prints it
 * to the POSIX standard output.
 * @filename: the text file to be read
 * @letters: the number of letters it should read and print
 * Return: actual number of letters it could read and print
 * or 0 if filename is NULL, or if write fails
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t bytes_read, bytes_written, fd;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	bytes_read = read(fd, buffer, letters);
	bytes_written = write(STDIN_FILENO, buffer, bytes_read);

	free(buffer);
	close(fd);
	return (bytes_written);
}
