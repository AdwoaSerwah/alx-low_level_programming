#include "main.h"

/**
 * print_numbers - Prints the numbers from 0 to 9
 */
void print_numbers(void)
{
	int num = 0;

	while (num < 10)
	{
		_putchar(num + '0');
		num++;
	}
	_putchar('\n');
}
