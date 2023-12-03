#include "hash_tables.h"

/**
 * hash_table_get - a function that retrievs a value from the hash table.
 * @ht: a pointer to the hashtable.
 * @key: a pointer to the Key of a desired value.
 * Return: The value if success, NULL if fail.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *current;
	unsigned long int index;

	if (strcmp(key, "") == 0 || key == NULL || ht == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];
	if (current == NULL)
		return (NULL);
	if (strcmp(current->key, key) == 0)
		return (current->value);
	else 
		return (NULL);
}
