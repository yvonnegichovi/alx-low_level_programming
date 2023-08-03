#include <stdio.h>
#include "main.h"

/**
 * binary_to_unit - converts a binary number to an unsigned int
 * @b: pointer pointing to a string of 0 and 1 chars
 * Return: converted number, 0 if there is one or more chars
 * in the string b that is not 0 or 1 or b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int k = 0;

	if (b == NULL)
		return 0;

	while (b[k] != '\0')
	{
		if (b[k] == '0')
			result = result << 1;
		else if (b[k] == '1')
			result = (result << 1) | 1;
		else
			return 0;
		k++;
	}
	return (result);
}
