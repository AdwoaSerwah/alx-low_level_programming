#include "search_algos.h"

/**
 * interpolation_search - Searches for a value in array using Interpolation
 * @array: Array
 * @size: Size
 * @value: Value to find
 *
 * Return: First index of value on success, else -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;
	size_t pos;

	if (array == NULL || size == 0)
		return (-1);

	while (low <= high && value >= array[low] && value <= array[high])
	{
		if (low == high)
		{
			printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
			if (array[low] == value)
			{
				return (low);
			}
			return (-1);
		}

		pos = low +
			(((double)(high - low) / (array[high] - array[low])) *
			 (value - array[low]));

		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);

		if (array[pos] == value)
			return (pos);

		if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
	}

	if (low < size && (value < array[low] || value > array[high]))
		printf("Value checked array[%lu] is out of range\n", pos);

	return (-1);
}
