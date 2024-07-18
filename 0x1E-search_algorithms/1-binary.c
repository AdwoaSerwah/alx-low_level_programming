#include <stdio.h>
#include <stddef.h>

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
