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
	int i = 0;

	while (s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
			sign *= -1;
		i++;
	}
	while (s[i] && (s[i] < '0' || s[i] > '9'))
	{
		if (s[i] == '-')
			sign *= -1;
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		int digit = s[i] - '0';
		if ((result > 0 && result > (INT_MAX - digit) / 10) ||
			(result < 0 && result < (INT_MIN + digit) / 10))
		{
			return (sign == 1) ? (INT_MAX) : (INT_MIN);
		}
		result = result * 10 + (sign * digit);
		i++;
	}
	return result;
}
