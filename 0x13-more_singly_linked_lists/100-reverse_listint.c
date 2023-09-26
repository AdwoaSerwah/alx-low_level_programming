#include "lists.h"

/**
 * reverse_listint - Reverses a linked list
 * @head: Pointer to another pointer
 *
 * Return: Pointer
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *init = NULL, *last_node;

	while (*head != NULL)
	{
		last_node = (*head)->next;
		(*head)->next = init;
		init = *head;
		*head = last_node;
	}
	*head = init;
	return (*head);
}
