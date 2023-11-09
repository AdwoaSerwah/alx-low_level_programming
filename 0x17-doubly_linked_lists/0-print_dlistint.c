#include "lists.h"

/**
 * print_dlistint - Prints all elements of a list
 * @h: List to print
 *
 * Return: Length of the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t len = 0;

	if (h == NULL)
		return (len);

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		len++;
	}
	return (len);
}
