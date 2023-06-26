#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: input
 * Return: 0
 */

void print_rev(char *s)
{
	int len = 0;

	while (*s != '\0')
	[
		len++;
	}

	for (int i = len - 1; i >= 0; i--)
	[
		_putchar(s[i]);
	}
	_putchar('\n');
}
