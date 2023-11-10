#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at index
 * @h: Pointer to pointer
 * @idx: Index
 * @n: Value
 *
 * Return: new_sk or NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *new_sk, *pres_sk = *h;

	if (idx == 0)
		return (add_dnodeint(h, n));
	while (i < idx - 1)
	{
		if (pres_sk == NULL)
			return (NULL);
		pres_sk = pres_sk->next;
		i++;
	}
	if (pres_sk == NULL)
		return (NULL);
	new_sk = malloc(sizeof(dlistint_t));
	if (new_sk == NULL)
		return (NULL);

	new_sk->n = n;
	new_sk->prev = pres_sk;
	new_sk->next = pres_sk->next;
	if (pres_sk->next != NULL)
		pres_sk->next->prev = new_sk;
	pres_sk->next = new_sk;
	return (new_sk);
}
