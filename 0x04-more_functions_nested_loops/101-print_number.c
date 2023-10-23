#include "main.h"

/**
 * print_number - Prints an integer using _putchar
 * @n: The integer to be printed
 */
void print_number(int n)
{
	int exponent = 1;
	int temp;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n > 9 || n < 0)
	{
		temp = n / 10;

		while (temp != 0)
		{
			exponent = exponent * 10;
			temp /= 10;
		}
		temp = n;
		while (exponent != 0)
		{
			int quotient = temp / exponent;

			_putchar(quotient + '0');
			temp = temp % exponent;
			exponent = exponent / 10;
		}
	}
	else
		_putchar(n + '0');
}
