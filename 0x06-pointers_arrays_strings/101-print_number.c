#include "main.h"

/**
 * print_number - Prints an integer using _putchar.
 * @n: The integer to be printed.
 */
void print_number(int n)
{
	int temp = n / 10, exponent = 1, quotient = 0;

	if (temp < 0 || (n < 0 && n >= -9))
	{
		_putchar('-');
		temp = -temp;
	}
	while (temp != 0)
	{
		exponent *= 10;
		temp = temp / 10;
	}
	temp = n;
	while (exponent > 0)
	{
		quotient = temp / exponent;
		if (quotient < 0)
			quotient = -quotient;
		_putchar(quotient + '0');
		temp = temp % exponent;
		exponent /= 10;
	}
}
