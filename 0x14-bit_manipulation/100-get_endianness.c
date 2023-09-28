#include "main.h"

/**
 * get_endianness - checks the endianness
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	unsigned int x = 1;
	char *b = (char *) &x; /* treats x as a sequence of bytes in memory */

	return (*b);
}
