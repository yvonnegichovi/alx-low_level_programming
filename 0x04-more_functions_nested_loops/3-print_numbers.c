#include "main.h"

/**
 * print_numbers - prints the numbers, from 0 to 9, followed by a new line
 * @a: interger to be printed
 * Return: 0
 */

void print_numbers(void)
{
	int a;

	for (a = '0'; a <= '9'; a++)
	{
		_putchar(a + '0');
	}
	_putchar('\n');
}
