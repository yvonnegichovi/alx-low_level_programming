#include "search_algos.h"
#include <math.h>

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
	int jump, left = 0, right = 0, i = 0, j;

	jump = sqrt(size);

	if (array == NULL)
		return (-1);

	while (right < i && array[right] < value)
	{
		printf("Value checked array[%d] = [%d]\n", right, array[right]);
		left = right;
		right += jump;
	}
	printf("Value found between indexes [%d] and [%d]\n", left, right);
	for (j = left; j <= right && j < i; j++)
	{
		printf("Value checked array[%d] = [%d]\n", j, array[j]);
		if (array[j] == value)
			return (j);
	}
	return (-1);
}
