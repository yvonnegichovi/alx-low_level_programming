#include "search_algos.h"
#include <math.h>

/**
 * min - finds the minimum value
 * @a: first value
 * @b: second value
 * Return: minimum value
 */

size_t min(size_t a, size_t b)
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
	size_t jump, prev = 0, curr;

	jump = sqrt(size);
	curr = min(jump, size) - 1;

	if (array == NULL)
		return (-1);

	while (array[curr] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", curr, array[curr]);
		prev = jump;
		jump += sqrt(size);
		if (prev >= size)
			return (-1);
	}
	printf("Value found between indexes [%ld] and [%ld]\n", prev, curr);
	while (array[prev] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
		prev++;
		if (prev == min(jump, size))
			return (-1);
	}
	if (array[prev] == value)
	{
		printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
		return (prev);
	}
	return (-1);
}
