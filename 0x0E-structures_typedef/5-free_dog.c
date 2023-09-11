#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Frees a dog structure
 * @d: Pointer to be freed
 *
 * Return: Nothing
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}

