#include "main.h"

int _putchar(char c);

/**
 * print_times_table - Prints the n times table, starting with 0
 * @n: The number of times table to print
 *
 * Return: void
 */
void print_times_table(int n)
{
	int row = 0, column, product, exponent = 1, temp, value, rem;

	if (n >= 0 && n <= 15)
	{
		while (row <= n)
		{
			column = 0;
			while (column <= n)
			{
				product = row * column;
				if (column > 0)
				{
					_putchar(',');
					_putchar(' ');
					if (product <= 99)
						_putchar(' ');
					if (product <= 9)
						_putchar(' ');
				}
				if (product <= 9)
					_putchar(product + '0');
				else
				{
					temp = product / 10;
					while (temp != 0)
					{
						exponent = exponent * 10;
						temp = temp / 10;
					}
					rem = product;
					while (exponent != 0)
					{
						value = rem / exponent;
						_putchar(value + '0');
						rem = rem % exponent;
						exponent /= 10;
					}
					exponent = 1;
				}
				column++;
			}
			_putchar('\n');
			row++;
		}
	}
}
