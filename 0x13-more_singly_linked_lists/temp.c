#include "lists.h"
#include <stdio.h>

/**
 * free_listint_safe - Frees a list
 * @h: Pointer
 *
 * Return: node_size_sk
 */
size_t free_listint_safe(listint_t **h)
{
        listint_t *present, *init;
        size_t node_size_sk = 0;
        listint_t *been[1024] = {NULL};

        if (h == NULL || *h == NULL)
                return (0);

        present = *h;
        while (present)
        {
                if (been[node_size_sk])
                {
                        *h = NULL;
                        printf("THere\n");
                return (node_size_sk);
                }

                been[node_size_sk] = present;
                init = present->next;
                free(present);
                present = init;
                node_size_sk++;
        }

        *h = NULL;
        return (node_size_sk);
}
