#include "search_algos.h"

/**
 * jump_list - Searches for a value using the Jump search algorithm
 * @list: Pointer to the head of list
 * @size: Size
 * @value: Value
 *
 * Return: Pointer to the first node of value is or NULL
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step = sqrt(size);
	listint_t *current = list, *prev = NULL;
	size_t i;

	if (!list)
		return (NULL);

	while (current->n < value && current->next)
	{
		prev = current;
		for (i = 0; i < step && current->next; i++)
			current = current->next;

		printf("Value checked at index [%lu] = [%d]\n",
				current->index, current->n);
	}

	printf("Value found between indexes [%lu] and [%lu]\n",
			prev->index, current->index);

	while (prev->index <= current->index)
	{
		printf("Value checked at index [%lu] = [%d]\n", prev->index, prev->n);
		if (prev->n == value)
			return (prev);
		if (prev->n > value)
			return (NULL);
		if (prev->next == NULL)
			return (NULL);
		prev = prev->next;
	}

	return (NULL);
}
