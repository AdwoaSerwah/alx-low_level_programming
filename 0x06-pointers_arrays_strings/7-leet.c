#include "main.h"

/**
 * leet - Encodes a string into 1337.
 * @str: The input string.
 *
 * Return: A pointer to the resulting string.
 */
char *leet(char *str)
{
	int i = 0;
	char *ptr = str;
	char a[256] = {0};
	char char1[] = {'4', '3', '0', '7', '1'};
	char char2[] = {'a', 'e', 'o', 't', 'l', 'A', 'E', 'O', 'T', 'L'};

	while (i < 10)
	{
		a[(int)char2[i]] = char1[i % 5];
		i++;
	}
	while (*ptr != '\0')
	{
		if (a[(int)(*ptr)] != 0)
			*ptr = a[(int)(*ptr)];
		ptr++;
	}
	return (str);
}
