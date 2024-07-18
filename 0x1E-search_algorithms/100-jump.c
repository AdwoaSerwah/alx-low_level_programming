#include "search_algos.h"

/**
 * jump_search - Searches for a value in sorted array using Jump search algo
 * @array: Array
 * @size: Size
 * @value: Value to find
 *
 * Return: First index of value on success , or -1 on failure
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step = sqrt(size);
	size_t high = 0, i;

	if (array == NULL || size == 0)
		return (-1);

	while (array[high] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", high, array[high]);
		if (high + step >= size || array[high + step] >= value)
			break;
		high = high + step;
	}

	printf("Value found between indexes [%lu] and [%lu]\n", high, high + step);

	for (i = high; i < size && i <= high + step; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
