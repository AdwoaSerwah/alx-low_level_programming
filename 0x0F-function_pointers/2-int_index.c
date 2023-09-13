#include "function_pointers.h"

/**
 * int_index - Searches for an integer
 * @array: Array
 * @size: Number of elements in the array
 * @cmp: Pointer to the function to be used to compare values
 *
 * Return: Index of first element for which the cmp function does not return 0,
 *         -1 if no element matches or ifsize <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	if (array != NULL && cmp != NULL && size > 0)
	{
		int i = 0;

		while (i < size)
		{
			if (cmp(array[i]))
			{
				return (i);		
			}
			i++;
		}
	}
	return (-1);
}
