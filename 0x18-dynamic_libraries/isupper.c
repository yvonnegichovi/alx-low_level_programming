#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: the char to be checked
 * Return: 1 if c is uppercase, 0 if otherwisw
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
		c++;
	}
	else
		return (0);
	_putchar('\n');
}
