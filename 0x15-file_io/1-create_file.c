#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * create_file - creates a file, writes and truncates it
 * @filename: the name of the file to create
 * @text_content: is a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 *
 * Description. Failure could be if file can not be created
 * file can not be written, write “fails”
 * if filename is NULL
 */

int create_file(const char *filename, char *text_content)
{
	int fd, bw;

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		bw = write(fd, text_content, _strlen(text_content));
		if (bw == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: len
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
