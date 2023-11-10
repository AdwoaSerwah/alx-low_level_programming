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
	unsigned int i = 0;
	dlistint_t *pres_sk = *head;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(pres_sk);
		return (1);
	}
	while (i < index - 1)
	{
		if (pres_sk == NULL)
			return (-1);
		pres_sk = pres_sk->next;
		i++;
	}
	if (pres_sk == NULL || pres_sk->next == NULL)
		return (-1);
	pres_sk->next = pres_sk->next->next;
	if (pres_sk->next != NULL)
		pres_sk->next->prev = pres_sk;
	return (1);
}
