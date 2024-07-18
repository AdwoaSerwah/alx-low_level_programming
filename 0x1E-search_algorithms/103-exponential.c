#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array using binary search
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to search for
 *
 * Return: Index where value is located, or -1 if not found or if array is NULL
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left_sk = 0, right_sk = size - 1, middle, i;

	if (array == NULL)
		return (-1);

	while (left_sk <= right_sk)
	{
		printf("Searching in array: ");
		for (i = left_sk; i <= right_sk; i++)
		{
			printf("%d", array[i]);
			if (i < right_sk)
				printf(", ");
		}
		printf("\n");

		middle = (left_sk + right_sk) / 2;

		if (array[middle] == value)
			return (middle);
		else if (array[middle] < value)
			left_sk = middle + 1;
		else
			right_sk = middle - 1;
	}

	return (-1);
}

/**
 * exponential_search - Searches for value in sorted array using exponential
 * @array: Array
 * @size: Size
 * @value: Value to find
 *
 * Return: First index of value, else -1
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1;
	size_t left, right;
	int index;

	if (array == NULL)
		return (-1);

	if (array[0] == value)
		return (0);

	while (bound < size && array[bound] <= value)
	{
		printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}

	left = bound / 2;
	right = (bound < size) ? bound : size - 1;

	printf("Value found between indexes [%lu] and [%lu]\n", left, right);

	index = binary_search(array + left, right - left + 1, value);
	if (index != -1)
		return (index + left);

	return (-1);
}
