#include "main.h"

/**
 * *_strcat - concatenates two strings
 * @src: input
 * @dest: input
 * Return: char *dest, char *src
 */

char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	while (*ptr != '\0')
	{
		ptr++;
	}
	while (*src != '\0')
	{
		*ptr = *src;
		ptr++;
		src++;
	}
	return (dest);
}
