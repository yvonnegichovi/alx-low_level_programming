#include "main.h"

/**
 * _islower - Entry point, checks for lowercase characters
 * @c: is the char to be checked
 * Return: 1 if char is lowercase, 0 otherwise
 */

int _islower(int c);
{
	int c;

	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
