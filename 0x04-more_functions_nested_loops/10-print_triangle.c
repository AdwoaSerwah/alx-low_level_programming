#include "main.h"

/**
 * print_triangle - prints a right-aligned triangle of '#' characters
 * @size: the size of the triangle
 */
void print_triangle(int size)
{
	int spaces, hashes, row;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	row = 1;
	while (row <= size)
	{
		spaces = size - row;
		while (spaces > 0)
		{
			_putchar(' ');
			spaces--;
		}

		hashes = 1;
		while (hashes <= row)
		{
			_putchar('#');
			hashes++;
		}

		_putchar('\n');
		row++;
	}
}
