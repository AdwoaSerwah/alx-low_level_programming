#include "main.h"

/**
 * print_array - Prints n elements of an array
 * @a: Array to be printed
 * @n: Number of elements to print
 */
void print_array(int *a, int n)
{
	int length = 0;

	while (length < n)
	{
		printf("%d", a[length]);
		if (length < n - 1)
		{
			printf(", ");
		}
		length++;
	}
	printf("\n");
}
