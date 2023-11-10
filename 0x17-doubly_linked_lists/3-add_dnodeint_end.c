#include "lists.h"

/**
 * add_dnodeint_end - Add a new node at the end of list
 * @head: Pointer to pointer
 * @n: Value to insert
 *
 * Return: new_element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_element = malloc(sizeof(dlistint_t));
	dlistint_t *p = *head;

	if (new_element == NULL)
		return (NULL);

	new_element->next = NULL;
	new_element->n = n;

	if (*head == NULL)
	{
		new_element->prev = NULL;
		*head = new_element;
	}
	else
	{
		while (p->next != NULL)
			p = p->next;
		new_element->prev = p;
		p->next = new_element;
	}
	return (new_element);
}
