#include "main.h"

/**
 * _isdigit - checks for a digit (0 through 9)
 * @c: the integer to be checked
 * Return: 1 if c is a digit, 0 if otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
		_putchar('\n');
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
