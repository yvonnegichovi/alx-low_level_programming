#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: interger the number of times the character _ should be printed
 * Return: 0
 */

void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	} else
	{
		int i;

		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}

}

