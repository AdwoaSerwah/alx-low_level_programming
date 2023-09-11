#include <stdlib.h>

/**
 * create_array - Creates an array of characters and
 * initializes it with a specific character.
 * @size: The size of the array to create.
 * @c: The character with which to initialize the array.
 *
 * Return: If the function fails or size is 0, returns NULL.
 * Else, returns a pointer to the newly created array.
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *array = malloc(size);

	if (size == 0)
		return (NULL);
	if (array == NULL)
		return (NULL);
	while (i < size)
	{
		array[i] = c;
	i++;
	}
	return (array);
}

