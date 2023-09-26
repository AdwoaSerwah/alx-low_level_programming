#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a list
 * @head: Pointer to the first node
 * @index: Index
 *
 * Return: NULL if node does not exist or the node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int counter = 0;
	listint_t *tmp = head;

	while (tmp != NULL && counter < index)
	{
		tmp = tmp->next;
		counter++;
	}
	if (tmp == NULL)
		return (NULL);
	else
		return (tmp);
}
