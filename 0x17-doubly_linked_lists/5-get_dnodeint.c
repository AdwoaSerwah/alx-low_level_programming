#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the node at an index
 * @head: Pointer
 * @index: Index
 *
 * Return: The nth node or NULL if the node does not exist.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *pres_sk = head;

	while (pres_sk != NULL)
	{
		if (i == index)
			return (pres_sk);
		pres_sk = pres_sk->next;
		i++;
	}
	return (NULL);
}
