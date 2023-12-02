#include "hash_tables.h"

/**
 * hash_table_print - a function that prints the whole the hashtable.
 * @ht: a pointer to the hashtable.
 * Return: Void.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, output = 0;
	hash_node_t *current;

	if (ht == NULL)
		return;
	putchar('{');
	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current != NULL)
		{
			if (output == 1)
			{
				printf(", ");
			}
			printf("'%s': '%s'", current->key, current->value);
			output = 1;
			current = current->next;
		}
	}
	putchar('}');
	putchar('\n');
}
