#include "main.h"

/**
 * print_square - Prints a square followed by a new line
 * @size: Size of the square
 */
void print_square(int size)
{
	int row = size;
	int temp;

	if (size <= 0)
		_putchar('\n');
	while (size > 0)
	{
		temp  = row;
		while (temp > 0)
		{
			_putchar('#');
			temp--;
		}
		_putchar('\n');
		size--;

	}
}

