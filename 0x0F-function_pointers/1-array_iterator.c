#include "function_pointers.h"

/**
 * array_iterator - Executes a function given as a parameter
 *                  on each element of an array.
 * @array: Array
 * @size: Size of the array
 * @action: pointer to the function to execute
 *
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array != NULL && action != NULL)
	{
		size_t i = 0;

		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
