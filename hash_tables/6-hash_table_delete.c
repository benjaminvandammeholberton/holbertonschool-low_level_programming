#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * hash_table_delete - function that deletes a hash table
 * @ht: hash table to delete
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *tmp;

	if (ht == NULL)
		return;

	if (ht->array[i] != NULL)
	{
		for (i = 0; i < ht->size; i++)
		{
			if (ht->array[i] != NULL)
			{
				tmp = ht->array[i];
				while (tmp != NULL)
				{
					free(tmp->key);
					free(tmp->value);
					tmp = tmp->next;
				}
			}
		}
		free(ht->array[i]);
	}
	free(ht);
}
