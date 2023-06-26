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

	while (int i = len - 1 && i >= 0)
	[
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
