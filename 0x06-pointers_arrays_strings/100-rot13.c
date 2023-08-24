#include "main.h"

/**
 * rot13 - Encodes a string using ROT13 cipher.
 * @str: The input string.
 *
 * Return: A pointer to the resulting string.
 */
char *rot13(char *str)
{
	char *ptr = str;

	while (*ptr != '\0')
	{
		if ((*ptr >= 'a' && *ptr <= 'z') ||
		(*ptr >= 'A' && *ptr <= 'Z'))
		{
			if ((*ptr >= 'a' && *ptr <= 'm') ||
			(*ptr >= 'A' && *ptr <= 'M'))
			{
				*ptr += 13;
			}
			else
				*ptr -= 13;
		}
		ptr++;
	}

	return (str);
}

