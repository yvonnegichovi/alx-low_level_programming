#include "main.h"

/**
 * print_numbers - prints the numbers, from 0 to 9, followed by a new line
 * @a: interger to be printed
 * Return: 0
 */

void print_numbers(void)
{
	int a;
	char num;

	for (a = '0'; a <= '9'; a++)
	{
		num = (a + '0');
		_putchar(num);
	}
	_putchar('\n');
}
