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
	int a, b;

	for (a = 1; a <= 10; a++)
	{
		for (b = 0; b < 15; b++)
		{
			if (b >= 10)
				_putchar('1');
			_putchar((b % 10) + '0');
		}
		_putchar('\n');
	}
}
