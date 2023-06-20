#include "main.h"

/**
 * print_alphabet_x10 - entry pint, prints the lowercase letters 10 times
 * Return: 0 (success)
 */

void print_alphabet_x10(void);
{
	int i, j;

	for (j = 1; j <= 10; j++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
	}
	_putchar('\n');
	return (0);
}
