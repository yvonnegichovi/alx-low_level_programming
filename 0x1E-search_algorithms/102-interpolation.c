#include "search_algos.h"

/**
 * interpolation_search - searches for a value in a sorted array of integers
 * using the Interpolation search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: first index where value is located, -1 if value is not present in
 * array or if array is NULL
 *
 * Description: Every time you compare a value in the array to the value you
 * are searching, you have to print this value
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high = (size - 1);
	size_t pos;

	if (array == NULL)
		return (-1);

	while (low <= high && value >= array[low] && value <= array[high])
	{
		if  (low == high)
		{
			if (array[low] == value)
			{
				return (low);
			}
		}
		pos = low + (((double)(high - low) / (array[high] - array[low])) * (value - array[low]));
		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
			return (pos);
		if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
	}
	printf("Value checked array[%lu] is out of range\n", pos);
	return (-1);
}
