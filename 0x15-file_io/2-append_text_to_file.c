#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: NULL terminated string to add at the end of the file
 * Return: 1 on success and if the file exists,
 * -1 on failure, if filename is NULL, if the file does not exists
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, bw, length = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	fd = open(filename, O_WRONLY |O_APPEND);
	if (fd == -1)
		return (-1);
	bw = write(fd, text_content, length);
	if (bw == -1)
		return (-1);

	close(fd);
	return (1);
}
