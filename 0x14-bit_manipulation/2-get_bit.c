#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index
 * @n: Number
 * @index: Index
 *
 * Return: Value of the bit at the given index, or -1 if an error occurred.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mk_sk;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	mk_sk = 1UL << index;
	return ((n & mk_sk) ? 1 : 0);
}

