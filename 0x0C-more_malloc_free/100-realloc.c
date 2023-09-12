#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _realloc - Reallocates a memory block using malloc and free
 * @ptr: Pointer to the previously allocated memory block
 * @old_size: Size, in bytes, of the allocated space for ptr
 * @new_size: New size, in bytes, of the memory block
 *
 * Return: Pointer to the newly allocated memory block
 * or NULL if malloc fails or if new_size is 0
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	char *old_ptr = ptr;
	unsigned int i = 0;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
			return (NULL);
		return (new_ptr);
	}
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);
	while (i < old_size && i < new_size)
	{
		((char *)new_ptr)[i] = old_ptr[i];
		i++;
	}
	free(ptr);
	return (new_ptr);
}
