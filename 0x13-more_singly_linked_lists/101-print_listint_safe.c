#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list safely, handling cycles.
 * @head: A pointer to the first node of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current = head;
	size_t count = 0;
	const listint_t *visited[1024];

	while (current)
	{
		size_t i = 0;

		while (i < count)
		{
			if (current == visited[i])
			{
				printf("-> [%p] %d\n", (void *)current, current->n);
				exit(98);
			}
		i++;
		}
		visited[count++] = current;
		printf("[%p] %d\n", (void *)current, current->n);
		current = current->next;
	}

	return (count);
}
