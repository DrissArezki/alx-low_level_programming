#include "hash_tables.h"

/**
 * hash_table_delete - free hash table and all nodes
 * @ht: pointer to hash table
 *
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *space, *aux;
	unsigned long int i = 0;

	if (!ht)
		return;

	for (i = 0; i < ht->size; i++)
	{
		space = ht->array[i];
		while (space)
		{
			aux = space;
			space = space->next;
			if (aux->key)
				free(aux->key);
			if (aux->value)
				free(aux->value);
			free(aux);
		}
	}
	free(ht->array);
	free(ht);
}
