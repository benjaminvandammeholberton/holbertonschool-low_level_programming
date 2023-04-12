#include "hash_tables.h"
#include <stdio.h>
#include  <stdlib.h>

/**
 * hash_table_create - function that creates a hash table
 *
 * @size: size of the array
 *
 * Return: A pointer to tje newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table;

	hash_table = malloc(sizeof(hash_table_t) * size);
	if (hash_table == NULL)
        return (NULL);

	return (hash_table);
}
