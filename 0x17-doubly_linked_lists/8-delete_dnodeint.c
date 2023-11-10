#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at index
 * @head: Pointer
 * @index: Index
 *
 * Return: 1 on success, -1 on error.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int counter = 0;
	dlistint_t *present, *temp_sk;

	if (head == NULL || *head == NULL)
		return (-1);

	present = *head;

	if (index == 0)
	{
		*head = present->next;
		free(present);
		return (1);
	}

	while (present != NULL && counter < index - 1)
	{
		present = present->next;
		counter++;
	}

	if (present == NULL || present->next == NULL)
		return (-1);

	temp_sk = present->next;
	present->next = temp_sk->next;
	free(temp_sk);

	return (1);
}
