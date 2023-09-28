#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int
 * @b: Pointer to a string
 *
 * Return: output, or 0 if b is NULL or
 * string has non-zero or non-one characters
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int output = 0;

	if (b == NULL)
		return (0);

	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
			return (0);
		
		output = (output << 1) + (*b - '0');
		b++;
	}

	return (output);
}

