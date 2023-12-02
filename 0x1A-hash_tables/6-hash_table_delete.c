#include "hash_tables.h"

/**
 * hash_table_delete - a function that deletes the hashtable.
 * @ht: a pointer to the hashtable.
 * Return: Void.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *current;
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		while (ht->array[i] != NULL)
		{
			current = ht->array[i]->next;
			free(ht->array[i]->key);
			free(ht->array[i]->value);
			free(ht->array[i]);
			ht->array[i] = current;
		}
	}
	free(ht->array);
	free(ht);
}
