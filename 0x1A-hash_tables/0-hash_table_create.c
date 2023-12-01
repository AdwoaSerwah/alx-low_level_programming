#include "hash_tables.h"
#include <stdlib.h>

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = malloc(sizeof(hash_table_t));
	unsigned long int i = 0;

	if (table == NULL)
		return (NULL);
	table->size = size;
	table->array = malloc(sizeof(hash_table_t) * size);
	if (table->array == NULL)
		return (NULL);

	while (i < table->size)
	{
		table->array[i] = NULL;
		i++;
	}
	return (table);
}
