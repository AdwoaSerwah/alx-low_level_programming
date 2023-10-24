#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: Pointer to the string to be converted.
 *
 * Return: The converted integer value.
 */
int _atoi(char *s)
{
	int sign = 1;
	int result = 0;

	while (*s == '-' || *s == '+')
	{
		if (*s == '-')
			sign *= -1;
		s++;
	}
	while (*s && (*s < '0' || *s > '9'))
	{
		if (*s == '-')
			sign *= -1;
		s++;
	}
	while (*s >= '0' && *s <= '9')
	{
		int digit = *s - '0';

		if ((result > 0 && result > (INT_MAX - digit) / 10) ||
			(result < 0 && result < (INT_MIN + digit) / 10))
		{
			return (sign == 1) ? (INT_MAX) : (INT_MIN);
		}
		result = result * 10 + (sign * digit);
		s++;
	}
	return result;
}
