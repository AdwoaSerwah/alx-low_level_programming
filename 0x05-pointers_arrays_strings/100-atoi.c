#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: Pointer to the string to be converted.
 *
 * Return: The converted integer value.
 */
int _atoi(char *s)
{
	int inner_count = 0, expo = 1, num = 0, is_neg, is_num;

	while (*s != '\0')
	{
		is_num = (*s >= '0' && *s <= '9');
		is_neg = *s == '-' && (*(s + 1) >= '0' && *(s + 1) <= '9');
		if (is_num || is_neg)
		{
			if (is_neg)
				is_num = 1;
			while (is_num && *s != '\0')
			{
				inner_count++;
				s++;
				is_num = (*s >= '0' && *s <= '9');
			}
			s--;
			while (inner_count > 0)
			{
				if (*(s - 1) == '-' && inner_count == 2)
				{
					num = ((*s - '0') * -1) * expo - num;
					return (num);
				}
				num = ((*s - '0') * expo) + num;
				if (expo < 1000000000)
					expo = expo * 10;
				inner_count--;
				s--;
			}
			return (num);
		}
		s++;
	}
	return (num);
}
