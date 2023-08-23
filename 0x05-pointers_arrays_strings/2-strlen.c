#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @s: The string
 *
 * Return: length of s
 */
int _strlen(char *s)
{
	int string_length = 0;

	while (*s != '\0')
	{
		string_length++;
		s++;
	}
	return (string_length);
}
