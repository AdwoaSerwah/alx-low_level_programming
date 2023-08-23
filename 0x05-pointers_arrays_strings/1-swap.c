#include "main.h"

/**
 * swap_int - Swaps the values of two integers
 * @a: Value to swap
 * @b: Value to swap
 */
void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
