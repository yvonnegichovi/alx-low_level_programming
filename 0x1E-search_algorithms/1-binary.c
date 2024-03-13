#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 * using Binary search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: the value to search for
 * Return: index where value is located, -1 if value is not present in array
 * or if array is NULL
 *
 * Description: print the array being searched every time it changes.
 * (e.g. at the beginning and when you search a subarray)
 * assume that array will be sorted in ascending order
 * assume that value won’t appear more than once in array
 */

int binary_search(int *array, size_t size, int value)
{
	size_t left, right, m, i;

	left = 0;
	right = size - 1;

	if (array == NULL)
		return (-1);

	while (left < right)
	{
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i < right)
				printf(", ");
		}
		printf("\n");
		m = (left + right) / 2;
		if (array[m] < value)
			left = (m + 1);
		else if (array[m] > value)
			right = (m - 1);
		else
			return (m);
	}
	return (-1);
}
