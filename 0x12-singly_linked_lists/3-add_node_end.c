#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a linked list.
 * @head: Pointer to pointer
 * @str: String to be added
 *
 * Return: Address of new element, or NULL if it fails
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *next_node;
	list_t *present_node;

	if (str == NULL)
		return (NULL);
	next_node = malloc(sizeof(list_t));
	if (next_node == NULL)
		return (NULL);
	next_node->str = strdup(str);
	if (next_node->str == NULL)
	{
		free(next_node);
		return (NULL);
	}
	next_node->len = 0;
	next_node->next = NULL;

	if (*head == NULL)
	{
		*head = next_node;
	}
	else
	{
		present_node = *head;
		while (present_node->next != NULL)
		{
			present_node = present_node->next;
		}
		present_node->next = next_node;
	}
	return (next_node);
}
