#include "lists.h"
#include <string.h>

/**
 * add_node - Adds a new node at the beginning of a linked list
 * @head: Pointer to the first string
 * @str: String to be added
 *
 * Return: Address of new element or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *next_node;
	int str_len = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[str_len] != '\0')
	{
		str_len++;
	}
	next_node = malloc(sizeof(list_t));
	if (next_node == NULL)
	{
		return (NULL);
	}
	next_node->str = strdup(str);
	if (next_node->str == NULL)
	{
		free(next_node);
		return (NULL);
	}
	next_node->len = str_len;
	next_node->next = *head;
	*head = next_node;

	return (next_node);
}
