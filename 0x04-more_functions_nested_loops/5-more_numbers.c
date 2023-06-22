#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14,
 * @a: interger of number of times the numbers are printed
 * @b: char of the numbers to be printed
 * followed by a new line
 * Return: 0
 */

void more_numbers(void)
{
	int i, j;

	for (i = 1; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
				_putchar('1');
			_putchar (j % 10 + '0');
		}
		_putchar('\n');
	}
}

