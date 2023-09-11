#include <stdlib.h>

/**
 * _strdup - Duplicates a string.
 * @str: The string to duplicate.
 *
 * Return: If str is NULL or if memory allocation fails, returns NULL
 * Otherwise, returns a pointer to the duplicated string.
 */
char *_strdup(char *str)
{
	char *dup_str;
	unsigned int len = 0;
	unsigned int i = 0;

	if (str == NULL)
		return (NULL);
	while (str[len] != '\0')
		len++;
	dup_str = malloc((len + 1) * sizeof(char));
	if (dup_str == NULL)
		return (NULL);
	while (i < len)
	{
		dup_str[i] = str[i];
		i++;
	}
	dup_str[i] = '\0';
	return (dup_str);
}
