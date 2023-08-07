#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - reads a text file and prints it
 * to the POSIX standard output
 * @filename: the text file to be read
 * @letters: the number of letters it should read and print
 * Return: actual number of letters it could read and print,
 * 0 is file can not be opened or read, or if filename is NULL,
 * or if write fails or does not write the expected amount of bytes.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t fp;
	ssize_t letters_read;
	ssize_t letters_printed;

	fp = open(filename, O_RDONLY);
	if (fp == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	letters_read = read(fp, buffer, letters);
	letters_printed = write(STDOUT_FILENO, buffer, letters_read);

	free(buffer);
	close(fp);
	return (letters_printed);
}

