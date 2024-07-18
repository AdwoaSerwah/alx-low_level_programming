#include <stdio.h>
#include <stdlib.h>

/**
 * print_array - Prints an array
 * @array: Array
 * @left: Left
 * @right: Right
 */
void print_array(int *array, size_t left, size_t right)
{
	size_t i;

	printf("Searching in array: ");
	for (i = left; i <= right; i++)
	{
		if (i > left)
			printf(", ");
		printf("%d", array[i]);
	}
	printf("\n");
}

/**
 * recursive_binary - Recursive function for advanced binary search
 * @array: Array
 * @left: Left
 * @right: Right
 * @value: Value to find
 *
 * Return: The index of value, or -1
 */
int recursive_binary(int *array, size_t left, size_t right, int value)
{
	size_t mid;

	if (left > right)
		return (-1);

	print_array(array, left, right);

	mid = left + (right - left) / 2;

	if (array[mid] == value && (mid == left || array[mid - 1] != value))
		return (mid);

	if (array[mid] >= value)
		return (recursive_binary(array, left, mid, value));

	return (recursive_binary(array, mid + 1, right, value));
}

/**
 * advanced_binary - Searches for a value in a sorted array
 * @array: Array
 * @size: Size
 * @value: Value
 *
 * Return: The index of value, or -1 if not found
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);

	return (recursive_binary(array, 0, size - 1, value));
}
