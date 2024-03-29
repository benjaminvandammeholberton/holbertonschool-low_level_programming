#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * dlistint_len - Function that returns the number of elements
 * in a linked list.
 * @h: First element of the linked list
 * Return: the number of elements in the linked list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t elements = 0;

	while (h != NULL)
	{
		elements++;
		h = h->next;
	}
	return (elements);
}
