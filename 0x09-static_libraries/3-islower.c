#include "main.h"

/**
 * _islower - Checks for lowercase letter.
 *@c: The character to be checked
 * Return: 1 if c is lowercase, else return 0.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
