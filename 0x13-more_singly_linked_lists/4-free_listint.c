#include "lists.h"

/**
 * free_listint - Frees a list
 * @head: Pointer to the first element
 *
 * Return: Nothing
 */
void free_listint(listint_t *head)

{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
