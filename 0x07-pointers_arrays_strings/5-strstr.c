#include "main.h"

/**
 * _strstr - Locates a substring
 * @haystack: String
 * @needle: String
 *
 * Return: haystack or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *needle_ptr = needle;
		char *match;

		if (*haystack == *needle_ptr)
		{
			match = haystack;
		}
		while (*needle_ptr)
		{
			if (*match != *needle_ptr)
				break;
			needle_ptr++;
			match++;
		}
		if (*needle_ptr - 1 == *match - 1)
			return (haystack);
		haystack++;
	}
	return (NULL);
}
