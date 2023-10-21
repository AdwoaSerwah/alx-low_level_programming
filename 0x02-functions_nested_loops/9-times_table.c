#include "main.h"

/**
 * times_table - Prints the 9 times table
 */
void times_table(void)
{
	int row = 0, column, product;

	while (row <= 9)
	{
		column = 0;
		while (column <= 9)
		{
			product = column * row;
			if (column > 0)
			{
				_putchar(',');
				_putchar(' ');
				if (product <= 9)
				{
					_putchar(' ');
				}
			}
			if (product > 9)
			{
				_putchar((product / 10) + '0');
				_putchar((product % 10) + '0');
			}
			else
				_putchar(product + '0');
			column++;
		}
		_putchar('\n');
		row++;
	}
}
