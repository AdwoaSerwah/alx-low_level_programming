#include "lists.h"

/**
 * free_listint2 - Frees a list
 * @head: Pointer to another pointer
 *
 * Return: Nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *h;
	listint_t *tmp;

	if (head == NULL)
		return;
	h = *head;
	while (h != NULL)
	{
		tmp = h;
		h = h->next;
		free(tmp);
	}
	*head = NULL;
}
