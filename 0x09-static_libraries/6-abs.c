#include "main.h"

/**
 * _abs - It computes the absolute value of an integer
 * @n: The integer to find its absolute
 *
 * Return: -n if n < 0, otherwise return n
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}
