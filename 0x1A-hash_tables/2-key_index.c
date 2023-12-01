#include "hash_tables.h"

/**
 * key_index - Gives the key index
 * @key: The key
 * @size: The size of the array of the hash table
 *
 * Return: key index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_val;

	hash_val = hash_djb2(key);
	return (hash_val % size);
}
