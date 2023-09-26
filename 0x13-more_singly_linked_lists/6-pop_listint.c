#include "lists.h"

/**
 * pop_listint - Deletes the head node of a list
 * @head: Pointer to another pointer
 *
 * Return: Head node's data
 */
int pop_listint(listint_t **head)
{
	listint_t *first;
	int first_num = 0;

	if (head == NULL || *head == NULL)
		return (0);
	first = *head;
	first_num = first->n;

	*head = (*head)->next;
	free(first);
	return (first_num);

}
