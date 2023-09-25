#include "lists.h"

/**
 * listint_len - Returns the number of elements
 * @h: Pointer to the first element
 *
 * Return: node_len
 */
size_t listint_len(const listint_t *h)
{
	size_t node_len = 0;

	while (h != NULL)
	{
		h = h->next;
		node_len++;
	}
	return (node_len);
}
