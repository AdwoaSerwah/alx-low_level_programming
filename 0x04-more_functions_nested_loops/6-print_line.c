#include "main.h"

/**
 * print_line - Draws a straight line in terminal
 * @n: Number of underscores to bee printed
 */
void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
