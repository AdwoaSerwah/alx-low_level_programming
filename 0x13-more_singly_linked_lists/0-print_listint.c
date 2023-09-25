#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Prints all the elements of a linked list
 * @h: Pointer to the node
 *
 * Return: node_len
 */

size_t print_listint(const listint_t *h)
{
	size_t node_len = 0;

	while (h != NULL)
	{
		printf("%i\n", h->n);
		h = h->next;
		node_len++;
	}
	return (node_len);
}
