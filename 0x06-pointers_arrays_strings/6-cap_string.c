#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The input string.
 *
 * Return: A pointer to the resulting string.
 */
char *cap_string(char *str)
{
	int word = 1;
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
			str[i] == ',' || str[i] == ';' || str[i] == '.' ||
			str[i] == '!' || str[i] == '?' || str[i] == '"' ||
			str[i] == '(' || str[i] == ')' || str[i] == '{' ||
			str[i] == '}')
		{
			word = 1;
		}
		else if (word && (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] = str[i] - ('a' - 'A');
			word = 0;
		}
		else
			word = 0;
		i++;
	}

	return (str);
}
