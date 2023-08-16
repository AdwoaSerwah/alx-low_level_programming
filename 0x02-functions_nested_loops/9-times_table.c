#include "main.h"

/**
 * times_table - Prints the 9 times table
 */
void times_table(void)
{
	int num1 = 0;

	while (num1 <= 9)
	{
		int num2 = 0;

		while (num2 <= 9)

		{
			int product = num1 * num2;

			if (product > 9)
			{
				_putchar(' ');
				_putchar((product / 10) + '0');
				_putchar((product % 10) + '0');
			}
			else
			{
				if (num2 > 0)
					_putchar(' ');
				_putchar(product + '0');
			}
			if (num2 < 9)
				_putchar(',');
			else
				_putchar('\n');
			num2++;
		}
		num1++;
	}
}
