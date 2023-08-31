#include "main.h"

/**
 * flip_bits - returns the number of bits you would need
 * to flip to get from one number to another
 * @n: the first number to be flipped
 * @m: the second number to be flipped
 * Return: number of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int x, count = 0;
	unsigned long int one;
	unsigned long int two = n ^ m;

	for (x = 63; x >= 0; x--)
	{
		one = two >> x;
		if (one & 1)
			count++;
	}
	return (count);
}
