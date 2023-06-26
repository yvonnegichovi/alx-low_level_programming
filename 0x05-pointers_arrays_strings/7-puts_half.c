#include "main.h"

/**
 * puts_half - Write a function that prints half of a string
 * followed by a new line
 * @str: input
 * Return: 0
 */

void puts_half(char *str)
{
	int len;
	int i, n;

	while (*str != '\0')
	{
		len++;
	}
	if (len % 2 == 0)
	{
		n = len / 2;
	}
	else
	{
		n = (len - 1) / 2;
	}

	for (i = n; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
