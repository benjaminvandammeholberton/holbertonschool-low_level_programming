#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_get - function that retrieves a value associated with a key
 * @ht: hash table look into
 * @key: key looking for
 * Return: The value associated with the element
 * NULL if key couldn't be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *tmp;
	char *dupkey = strdup(key);

	index = key_index((const unsigned char *) key, ht->size);
	if (ht->array[index]->next == NULL)
	{
		if  ((strcmp(dupkey, ht->array[index]->key) == 0))
			return (ht->array[index]->value);
		else
			return (NULL);
	}

	tmp = ht->array[index];

	while (strcmp(dupkey, tmp->key) != 0)
	{
		tmp = tmp->next;
		if (tmp == NULL)
			return (NULL);
	}
	return (NULL);
}
