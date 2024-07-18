#include "search_algos.h"
#include <stdio.h>
#include <math.h>

/**
 * linear_skip - Searches for a value in a sorted skip list of integers.
 *
 * @list: Pointer to the head of the skip list to search in
 * @value: Value to search for
 *
 * Return: A pointer to the node where value is located, or NULL if not found
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *current, *express;

	if (!list)
		return (NULL);

	current = list;
	express = list->express;
	while (express)
	{
		printf("Value checked at index [%lu] = [%d]\n",
				express->index, express->n);
		if (express->n >= value || !express->express)
		{
			printf("Value found between indexes [%lu] and [%lu]\n",
				   current->index, express->index);

			while (current && current->index <= express->index)
			{
				printf("Value checked at index [%lu] = [%d]\n",
						current->index, current->n);
				if (current->n == value)
					return (current);
				current = current->next;
			}
			break;
		}
		current = express;
		express = express->express;
	}
	printf("Value found between indexes [%lu] and [%lu]\n",
		   current->index, express->index);
	while (current && current->index <= express->index)
	{
		printf("Value checked at index [%lu] = [%d]\n",
				current->index, current->n);
		if (current->n == value)
			return (current);
		current = current->next;
	}
	return (NULL);
}
