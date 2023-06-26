#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: int to be swapped
 * @b: int to be swapped
 * Return: int *a and int *b
 */

void swap_int(int *a, int *b)
{
	int tempVar = *a;
	*a = *b;
	*b = tempVar;
}
