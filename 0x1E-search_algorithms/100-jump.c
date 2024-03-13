#include "search_algos.h"
#include <math.h>

/**
 * min - finds the minimum value
 * @a: first value
 * @b: second value
 * Return: minimum value
 */

int min(int a, int b)
{
	if (a < b)
		return (a);
	else
		return (b);
}

/**
 * jump_search - searches for a value in a sorted array of integers using
 * the Jump search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: the value to search for
 * Return: the first index where value is located, -1 if value is not present
 * in array or if array is NULL
 *
 * Description: You have to use the square root of the size of the array as
 * the jump step.
 * Every time you compare a value in the array to the value you are
 * searching for, you have to print this value
 */

int jump_search(int *array, size_t size, int value)
{
	int jump, prev = 0, curr, i = 0, j;

	jump = sqrt(size);
	curr = min(jump, size) - 1;

	if (array == NULL)
		return (-1);

	while (array[curr] < value)
	{
		printf("Value checked array[%d] = [%d]\n", curr, array[curr]);
		prev = curr;
		curr += jump;
		if (prev >= i)
			return (-1);
	}
	printf("Value found between indexes [%d] and [%d]\n", prev, curr);
	for (j = prev; j <= min(curr, i - 1); j++)
	{
		printf("Value checked array[%d] = [%d]\n", j, array[j]);
		if (array[j] == value)
			return (j);
	}
	return (-1);
}
