#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: NULL terminated string to add at te end of the file
 * Return: 1 on success or if file exists,
 * -1 on failure or if file does not exist
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fp, i, len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	fp = open(filename, O_WRONLY | O_APPEND);
	i = write(fp, text_content, len);

	if (fp == -1 || i == -1)
		return (-1);
	close(fp);
	return (1);
}
