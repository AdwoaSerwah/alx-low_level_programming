#include "main.h"

/**
 * print_binary - Prints the binary representation of a number
 * @n: number to print
 */
void print_binary(unsigned long int n)
{
	int fg_sk = 0;
	unsigned long int mk_sk = 1UL << (sizeof(unsigned long int) * 8 - 1);

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while (mk_sk > 0)
	{
		if ((n & mk_sk) == 0)
		{
			if (fg_sk)
				_putchar('0');
		}
		else
		{
			_putchar('1');
			fg_sk = 1;
		}
		mk_sk >>= 1;
	}
}
