#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - function that prints a hash table
 * @ht: hash table to print
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	int flag = 0;
	hash_node_t *tmp;

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
		if (ht->array[i] == NULL)
			continue;
		else
		{
			tmp = ht->array[i];
			while (tmp != NULL)
			{
				if (flag == 1)
					printf(", ");
				printf("'%s': '%s'", tmp->key, tmp->value);
				flag = 1;
				tmp = tmp->next;
			}
		}
	printf("}\n");
}
