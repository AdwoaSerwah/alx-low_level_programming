#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array using linear search algo
 * @array: Array
 * @size: Size of the array
 * @value: Value to find
 *
 * Return: First index of value on success or -1 on failure
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	size = size - 1;
	if (array == NULL)
		return (-1);

	while (i <= size)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return ((int) i);
		i++;
	}

	return (-1);
}
