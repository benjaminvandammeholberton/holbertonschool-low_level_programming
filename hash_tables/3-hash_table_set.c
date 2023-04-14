#include "hash_tables.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * hash_table_set - function that adds an element to the hash table
 * @ht: hash table wanted to add or update he key/value to
 * @key: key
 * @value: value associated to the key
 * Return: 1 if succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node = NULL;
	hash_node_t *tmp_node = NULL;
	char *dupkey = strdup(key);
	char *dupvalue = strdup(value);
	unsigned long int index;
	unsigned long int size = ht->size;

	printf("dupkey----> %s\n", dupkey);
	printf("dupvalue----> %s\n", dupvalue);

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->key = dupkey;
	new_node->value = dupvalue;
	new_node->next = NULL;

	index =  key_index((unsigned char *)dupkey, size);
	printf("index : %lu\n", index);
	if (ht->array[index] == NULL)
	{
		ht->array[index] = new_node;
		return (1);
	}
	tmp_node = ht->array[index];
	printf("tmp->key %s\n", tmp_node->key);
	while (tmp_node->next != NULL)
		tmp_node = tmp_node->next;
	tmp_node->next = new_node;

	return (1);
}
