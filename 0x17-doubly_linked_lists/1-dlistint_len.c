#include "lists.h"

/**
 * dlistint_len - Returns the number of elements in a linked list
 * @h: Linked list
 *
 * Return: len
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		h = h->next;
		len++;
	}
	return (len);
}
