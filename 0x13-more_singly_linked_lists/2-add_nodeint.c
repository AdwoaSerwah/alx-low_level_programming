#include "lists.h"

/**
 * add_nodeint - Adds a node at the beginning
 * @head: Pointer to the first node
 * @n : Constant value to be added
 *
 * Return: The address of the new element or NULL if failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	else
	{
		new->n = n;
		new->next = *head;
		*head = new;
		return (new);
	}
}
