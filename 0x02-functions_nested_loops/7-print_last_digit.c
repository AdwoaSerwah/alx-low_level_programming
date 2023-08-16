#include "main.h"
/**
 * print_last_digit - Prints the last digit of a number
 * @n: Number whose last value is to be printed
 *
 * Return: Last value of n
 */
int print_last_digit(int n)
{
	n = n % 10;
	if (n < 0)
	{
		n = -n;
	}
	_putchar(n + '0');
	return (n);
}
