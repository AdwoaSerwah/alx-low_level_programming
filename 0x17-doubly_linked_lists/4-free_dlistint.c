#include "lists.h"

/**
 * free_dlistint - Frees a linked list
 * @head: Pointer
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *p;

	while (head != NULL)
	{
		p = head;
		head = head->next;
		free(p);
	}
}
