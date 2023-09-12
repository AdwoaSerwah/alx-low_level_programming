#include <stdlib.h>

/**
 * argstostr - Concatenates all program arguments into a single string.
 * @ac: The number of arguments.
 * @av: The array of argument strings.
 *
 * Return: If ac == 0 or av == NULL, returns NULL.
 *		 Otherwise, returns a pointer to the concatenated string.
 */
char *argstostr(int ac, char **av)
{
	char *concat;
	int i = 0, j = 0, k = 0;
	int total_length = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	while (i < ac)
	{
		while (av[i][j] != '\0')
		{
			total_length++;
			j++;
		}
		total_length++;
		i++;
		j = 0;
	}
	concat = malloc((total_length + 1) * sizeof(char));
	if (concat == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			concat[k] = av[i][j];
			k++;
			j++;
		}
		concat[k] = '\n';
		k++;
		i++;
	}
	concat[k] = '\0';
	return (concat);
}
