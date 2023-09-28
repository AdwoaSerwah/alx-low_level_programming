#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another.
 * @n: First number
 * @m: Second number
 *
 * Return: Number of bits needed to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int output = n ^ m;
	unsigned int bit_len = 0;

	while (output > 0)
	{
		bit_len += output & 1;
		output >>= 1;
	}
	return (bit_len);
}

