#include "lists.h"

/**
 * sum_dlistint - Returns the sum of n in linked list
 * @head: Pointer
 *
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
