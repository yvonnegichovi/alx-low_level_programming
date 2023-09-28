#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer pointing to a string of 0 and 1 chars
 * Return: converted number, 0 if
 * there's one or more chars in the string b that is not 0 or 1
 * b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int bit = 0;

	if (!b)
		return (0);
	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		bit = (bit << 1) | (*b - '0');
		b++;
	}
	return (bit);
}
