#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - function that prints a hash table
 * @ht: hash table to print
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
		if (ht->array[i] == NULL)
			continue;
		else
		{		
				printf("%s : %s", ht->array[i]->key, ht->array[i]->value);
				ht->array[i] = ht->array[i]->next;
		}			
}
