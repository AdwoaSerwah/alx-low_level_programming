#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - Prints a linked list
 * @head: Pointer
 *
 * Return: sk_len
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *pres = head;
	size_t sk_len = 0;
	const listint_t *been[1024];

	while (pres)
	{
		size_t s = 0;

		while (s < sk_len)
		{
			if (pres == been[s])
			{
				printf("-> [%p] %d\n", (void *)pres, pres->n);
				exit(98);
			}
		s++;
		}
		been[sk_len++] = pres;
		printf("[%p] %d\n", (void *)pres, pres->n);
		pres = pres->next;
	}
	return (sk_len);
}
