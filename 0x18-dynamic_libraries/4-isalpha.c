#include "main.h"

/**
 * _isalpha - Checks for alphabetic characters
 * @c: Character to be checked
 *
 *Return: Returns 1 if c is letter, otherwise 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
