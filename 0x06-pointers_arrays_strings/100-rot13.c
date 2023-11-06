#include "main.h"

/**
 * rot13 - Encodes a string using ROT13 cipher.
 * @str: The input string.
 *
 * Return: A pointer to the resulting string.
 */
char *rot13(char *str)
{
	int i = 0;
	char s[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I',
	'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U',
	'V', 'W', 'X', 'Y', 'Z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H',
	'I', 'J', 'K', 'L', 'M', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h',
	'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u',
	'v', 'w', 'x', 'y', 'z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h',
	'i', 'j', 'k', 'l', 'm'
	};

	while (str[i] != '\0')
	{
		int j = 0;

		while (s[j] != '\0')
		{
			if (str[i] == s[j])
			{
				str[i] = s[j + 13];
				break;
			}
			j++;
		}
		i++;
	}
	return (str);
}
