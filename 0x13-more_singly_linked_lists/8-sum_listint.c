#include "lists.h"

/**
 * sum_listint - Sums all data of a list
 * @head: Pointer to the first node
 * Return: node_sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum = head->n + sum;
		head = head->next;
	}
	return (sum);
}
