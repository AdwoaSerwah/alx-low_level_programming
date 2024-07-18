#include "search_algos.h"

/**
 * bin_search - Binary search
 * @array: Array
 * @size: Size of the array
 * @value: Value to find
 * @i: Lower index
 * @j: Higher index
 *
 * Return: Index of value on success, -1 on failure
 */
int bin_search(int *array, size_t size, int value, size_t i, size_t j)
{
	size_t middle = (i + j) / 2, index = -1;

	printf("Searching in array: ");
	while (i <= j)
	{
		printf("%d", array[i]);

		if (j != i)
			printf(", ");
		i++;
	}
	printf("\n");

	if (array[middle] == value)
	{
		return (middle);
	}
	else if (middle == 0 || middle == size)
		return (index);
	else if (array[middle] > value)
	{
		i = 0;
		j = middle - 1;
		index = bin_search(array, size, value, i, j);
	}
	else
	{
		i = middle + 1;
		index = bin_search(array, size, value, i, j);
	}
	return (index);
}

/**
 * binary_search - Searches for a value in an array using binary search algo
 * @array: Array
 * @size: Size of the array
 * @value: Value to find
 *
 * Return: First index of value on success or -1 on failure
 */
int binary_search(int *array, size_t size, int value)
{
	int index = -1;

	size = size - 1;

	if (array == NULL)
		return (index);

	index = bin_search(array, size, value, 0, size);
	return (index);
}
