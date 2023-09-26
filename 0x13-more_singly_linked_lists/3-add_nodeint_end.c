#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end
 * @head: Pointer to the first node
 * @n: Value to be added
 *
 * Return: Address of the new element or NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *present;
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	present = *head;
	while (present->next != NULL)
	{
		present = present->next;
	}
	present->next = new;
	return (new);
}
