#include "search_algos.h"

/**
 * linear_search - searches for a value in array of integers
 * using linear search algorithms
 * @array: a pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: the value to search for
 * Return: first index where the value is located, -1 if
 * the value is not present in array or if array is NULL
 *
 * Description: Every time you compare a value in the array to the
 * value you are searching, you have to print this value
*/

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
