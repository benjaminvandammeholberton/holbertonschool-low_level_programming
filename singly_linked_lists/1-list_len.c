#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * list_len - function that count the number of elements in a linked list.
 * @h: first element of the linked list
 * Return: the number of elements of the linked list
 */

size_t list_len(const list_t *h)
{
	int elements = 0;

	while (h != NULL)
	{
		elements++;
		h = h->next;
	}
	return (elements);
}
