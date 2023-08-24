#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers.
 * @a: The array of integers.
 * @n: The number of elements in the array.
 */
void reverse_array(int *a, int n)
{
	int temporary;
	int first = 0;
	int last = n - 1;

	while (first < last)
	{
		temporary = a[first];
		a[first] = a[last];
		a[last] = temporary;
		first++;
		last--;
	}
}
