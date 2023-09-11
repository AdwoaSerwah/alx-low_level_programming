#include "main.h"

/**
 * str_len - Calculate the length of a string.
 * @s: The input string.
 *
 * Return: The length of the string.
 */
int str_len(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + str_len(s + 1));
}

/**
 * is_palindrome_recursive - Helper function to check if
 * a string is a palindrome.
 * @s: The input string.
 * @start: The index of the start of the current substring.
 * @end: The index of the end of the current substring.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome_recursive(char *s, int start, int end)
{
	if (start >= end)
		return (1);

	if (s[start] != s[end])
		return (0);

	return (is_palindrome_recursive(s, start + 1, end - 1));
}

/**
 * is_palindrome - Check if a string is a palindrome.
 * @s: The input string.
 *
 * Return: 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
	int length = str_len(s);

	if (length <= 1)
		return (1);

	return (is_palindrome_recursive(s, 0, length - 1));
}
