#include <stdlib.h>

/**
 * is_space - Check if a character is a space.
 * @c: The character to check.
 *
 * Return: 1 if the character is a space, 0 otherwise.
 */
int is_space(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}

/**
 * count_words - Count the number of words in a string.
 * @str: The input string.
 *
 * Return: The number of words in the string.
 */
int count_words(char *str)
{
	int count = 0;
	int in_word = 0;

	while (*str)
	{
		if (is_space(*str))
			in_word = 0;
		else if (!in_word)
		{
			count++;
			in_word = 1;
		}
		str++;
	}

	return (count);
}

/**
 * duplicate_word - Duplicate a word from start to end.
 * @start: Pointer to the start of the word.
 * @end: Pointer to the end of the word.
 *
 * Return: A new dynamically allocated string containing the word.
 */
char *duplicate_word(char *start, char *end)
{
	int length = end - start;
	char *word = malloc(length + 1);
	int i = 0;

	if (word == NULL)
		return (NULL);

	while (i < length)
	{
		word[i] = start[i];
		i++;
	}

	word[length] = '\0';

	return (word);
}

/**
 * split_words - Split a string into words.
 * @str: The input string.
 * @word_count: The number of words in the string.
 *
 * Return: An array of strings containing the words.
 */
char **split_words(char *str, int word_count)
{
	char **words = malloc((word_count + 1) * sizeof(char *));
	char **current_word = words;
	char *current = str;
	int in_word = 0;

	if (str == NULL || *str == '\0' || words == NULL)
		return (NULL);

	while (*current)
	{
		if (is_space(*current))
			in_word = 0;
		else if (!in_word)
		{
			*current_word = current;
			current_word++;
			in_word = 1;
		}
		current++;
	}

	*current_word = NULL;

	if (current_word == words)
	{
		free(words);
		return (NULL);
	}
	return (words);
}

/**
 * strtow - Split a string into words.
 * @str: The input string.
 *
 * Return: An array of strings containing the words.
 */
char **strtow(char *str)
{
	int word_count = count_words(str);
	char **words = split_words(str, word_count);
	char **word_ptr = words;

	if (words == NULL)
		return (NULL);
	while (*word_ptr != NULL)
	{
		char *word_end = *word_ptr;

		while (*word_end && !is_space(*word_end))
			word_end++;

		*word_ptr = duplicate_word(*word_ptr, word_end);

		if (*word_ptr == NULL)
		{
			char **free_ptr = words;

			while (free_ptr < word_ptr)
			{
				free(*free_ptr);
				free_ptr++;
			}
			free(words);
			return (NULL);
		}
		word_ptr++;
	}
	return (words);
}
