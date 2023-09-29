#include "main.h"

/**
 * get_endianness - checks the endianness of the machine
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int value_sk = 1;
	char *sk_ptr = (char *)&value_sk;

	if (*sk_ptr != 1)
		return (0);
	else
		return (1);
}
