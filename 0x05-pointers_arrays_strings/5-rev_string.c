#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: String to reverse
 */
void rev_string(char *s)
{
	int length = 0;
	char swap;
	int length2 = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	length2 = 0;
	while (length2 <  length / 2)
	{
		swap = s[length2];
		s[length2] = s[length - 1 - length2];
		s[length - 1 - length2] = swap;
		length2++;
	}
}
