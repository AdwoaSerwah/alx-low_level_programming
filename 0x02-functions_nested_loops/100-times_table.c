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
	int i = 0, j, result;

	if (n < 0 || n > 15)
		return;

	while (i <= n)
	{
		j = 0;
		while (j <= n)
		{
			result = i * j;
			_putchar('0'); /* Print the first element */
			if (j != 0)
			{
				_putchar(',');
				_putchar(' ');
				if (result < 10)
					_putchar(' ');
				_putchar('0' + result / 10);
				_putchar('0' + result % 10);
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}
