#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another
 * @n: the number to be flipped
 * @m: the number to be flipped to
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int b = n ^ m;
	unsigned long int a;
	int i, count = 0;

	for (i = 63; i >= 0; i--)
	{
		a = b >> i;
		if (a & 1)
			count++;
	}
	return (count);
}
