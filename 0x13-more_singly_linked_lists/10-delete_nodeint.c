#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at an index
 * @head: A pointer to another pointer
 * @index: Index
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int counter = 0;
	listint_t *present, *temp_sk;

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

