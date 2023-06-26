#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: input
 * Return: 0
 */

void print_rev(char *s)
{
	int longi = 0;
	int b;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	s--;
	for (b = longi; b > 0; b--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
