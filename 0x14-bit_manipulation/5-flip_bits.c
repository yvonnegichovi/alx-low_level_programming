#include <stdio.h>
#include "main.h"

/**
 * flip_bits - returns the number of bits you would need
 * to flip to get from one number to another
 * @n: input int
 * @m: input int
 * Return: number of bits flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int k, count = 0;
	unsigned long int current;
	unsigned long int new = n ^ m;

	for (k = 63; k >= 0; k--)
	{
		current = new >> k;
		if (current & 1)
			count++;
	}
	return (count);
}
