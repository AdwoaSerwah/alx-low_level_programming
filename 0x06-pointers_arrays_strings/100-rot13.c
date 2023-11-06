#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: The destination string.
 * @src: The source string.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	while (*ptr != '\0')
		ptr++;
	while (*src != '\0')
	{
		*ptr = *src;
		ptr++;
		src++;
	}
	*ptr = '\0';
	return (dest);
}

/**
 * rot13 - Encodes a string using ROT13 cipher.
 * @str: The input string.
 *
 * Return: A pointer to the resulting string.
 */
char *rot13(char *str)
{
	int i = 0;
	char s1[100] = "ABCDEFGHIJKLMNOPQRSTUVWXYZABCDEFGHIJKLM";
	char s2[] = "abcdefghijklmnopqrstuvwxyzabcdefghijklm";

	_strcat(s1, s2);
	while (str[i] != '\0')
	{
		int j = 0;

		while (j <= 77)
		{
			if (str[i] == s1[j])
			{
				str[i] = s1[j + 13];
				break;
			}
			j++;
		}
		i++;
	}
	return (str);
}
