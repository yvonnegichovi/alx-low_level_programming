#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: pointer to the number whose bit is to be set to 1
 * @index: index, starting from 0 of the bit you want to set
 * Return: 1 if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	/* sets 1 unsigned long digit at the index specified */
	/* and performs bitwise on the next */
	*n = ((1UL << index) | *n);
	return (1);
}
