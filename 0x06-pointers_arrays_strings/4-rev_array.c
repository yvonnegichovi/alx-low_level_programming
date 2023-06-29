#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: an array of intergers
 * @n: the number of elements to swap
 * Return: int *a, int n
 */

void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
