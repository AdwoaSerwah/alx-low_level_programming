#include "lists.h"

/**
 * add_dnodeint - Adds a node to the beginning of list
 * @head: Pointer to pointer
 * @n: Value
 *
 * Return: new_element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_element = malloc(sizeof(dlistint_t));

	if (new_element == NULL)
		return (NULL);

	new_element->n = n;
	new_element->prev = NULL;

	if (*head != NULL)
		(*head)->prev = new_element;

	new_element->next = *head;
	*head = new_element;
	return (new_element);
}
