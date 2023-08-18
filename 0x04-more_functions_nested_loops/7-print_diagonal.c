#include "main.h"

/**
 * print_diagonal - Draws a diagonal line on the terminal
 * @n: Number of dashes and spaces to print
 */
void print_diagonal(int n)
{
	int numSpaces = 0;
	int temp;

	if (n <= 0)
		_putchar('\n');
	while (n > 0)
	{
		temp = 0;
		while (temp < numSpaces)
		{
			_putchar(' ');
			temp++;
		}
		_putchar('\\');
		_putchar('\n');
		numSpaces++;
		n--;
	}
}
