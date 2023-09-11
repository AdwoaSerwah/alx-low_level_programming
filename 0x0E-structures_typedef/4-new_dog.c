#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Return: Pointer to the newly created dog (struct dog), or NULL if it fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog_ptr;
	int name_len = 0, owner_len = 0, i = 0;

	while (name[name_len])
		name_len++;
	while (owner[owner_len])
		owner_len++;
	new_dog_ptr = (dog_t *)malloc(sizeof(dog_t));
	if (new_dog_ptr == NULL)
		return (NULL);
	new_dog_ptr->name = (char *)malloc(name_len + 1);
	new_dog_ptr->owner = (char *)malloc(owner_len + 1);
	if (new_dog_ptr->name == NULL || new_dog_ptr->owner == NULL)
	{
		free(new_dog_ptr->name);
		free(new_dog_ptr->owner);
		free(new_dog_ptr);
		return (NULL);
	}
	while (name[i])
	{
		new_dog_ptr->name[i] = name[i];
		i++;
	}
	new_dog_ptr->name[i] = '\0';
	i = 0;
	while (owner[i])
	{
		new_dog_ptr->owner[i] = owner[i];
		i++;
	}
	new_dog_ptr->owner[i] = '\0';
	new_dog_ptr->age = age;
	return (new_dog_ptr);
}
