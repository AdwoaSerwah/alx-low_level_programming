#include "lists.h"

/**
 * free_list - Frees a linked list
 * @head: Pointer to the first element
 *
 * Return: Nothing
 */
void free_list(list_t *head)
{
	list_t *new;
	list_t *present;

	present = head;
	while (present != NULL)
	{
		new = present->next;
		free(present->str);
		free(present);
		present = new;
	}
}
