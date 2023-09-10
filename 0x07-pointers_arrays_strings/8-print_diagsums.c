#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix
 * @a: Pointer
 * @size: Size
 *
 * Return: Nothing
 */
void print_diagsums(int *a, int size)
{
	int i = 0;
	int left_sum = 0;
	int right_sum  = 0;

	while (i < size)
	{
		left_sum += *(a + i * size + i);
		right_sum += *(a + i * size + (size - 1 - i));
		i++;
	}
	printf("%i, %i\n", left_sum, right_sum);
}
