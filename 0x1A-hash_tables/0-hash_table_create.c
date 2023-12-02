#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table.
 * @size: the size of array of nodes of the hashtable.
 * Return: a pointer to the new  hashtable.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *hash_table;

	hash_table = malloc(sizeof(hash_table_t));
	if (hash_table == NULL)
		return (NULL);
	hash_table->size = size;
	hash_table->array = malloc(sizeof(hash_node_t *) * size);
	if (hash_table->array == NULL)
		free(hash_table);
	return (NULL);
	for (i = 0; i < size; i++)
		hash_table->array[i] = NULL;
	return (hash_table);
}
