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
	char *rot = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

	while (str[i] != '\0')
	{
		int j = 0;

		while (rot[j] != '\0')
		{
			if (str[i] == rot[j] &&
			((rot[j] >= 'n' && rot[j] <= 'z') ||
			(rot[j] >= 'N' && rot[j] <= 'Z')))
			{
				str[i] = rot[j] - 13;
				break;
			}
			else if (str[i] == rot[j] &&
			((rot[j] >= 'a' && rot[j] <= 'm') ||
			(rot[j] >= 'A' && rot[j] <= 'M')))
			{
				str[i] = rot[j] + 13;
				break;
			}
			j++;
		}
		i++;
	}
	return (str);
}

