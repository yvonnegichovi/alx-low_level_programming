#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of file to create
 * @text_content: NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure, if filename is NULL
 */

int create_file(const char *filename, char *text_content)
{
	int fp, i, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	fp = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	i = write(fp, text_content, len);

	if (fp == -1 || i == -1)
		return (-1);

	close(fp);

	return (1);
}
