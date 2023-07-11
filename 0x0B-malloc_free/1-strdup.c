#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - returns a pointer to the duplicated string
 * @str: input
 * Return: strcpy
 */

char *_strdup(char *str)
{
	unsigned int length = 0;
	char *strcpy;
	unsigned int i;

	if (str == NULL)
		return (NULL);

	while (str[length] != '\0')
		length++;

	strcpy = malloc((length + 1) * sizeof(char));

	if (strcpy == NULL)
		return (NULL);
	for (i = 0; i <= length; i++)
	{
		strcpy[i] = str[i];
	}
	return (strcpy);
}
