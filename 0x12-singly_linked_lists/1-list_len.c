#include "lists.h"

/**
 * list_len - Returns the number of elements in a linked list
 * @h: Pointer
 *
 * Return: Number of elements
 */

size_t list_len(const list_t *h)
{
	size_t list_len = 0;

	while (h != NULL)
	{
		list_len++;
		h = h->next;
	}
	return (list_len);
}
