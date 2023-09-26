#include "lists.h"

/**
 * find_listint_loop - Finds the loop in list.
 * @head: Pointer
 * Return: behind, or NULL if no loop.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *behind = head;
	listint_t *leading = head;

	if (head == NULL)
		return (NULL);
	while (behind && leading && leading->next)
	{
		behind = behind->next;
		leading = leading->next->next;
		if (behind == leading)
		{
			behind = head;
			while (behind != leading)
			{
				behind = behind->next;
				leading = leading->next;
			}
			return (behind);
		}
	}
	return (NULL);
}
