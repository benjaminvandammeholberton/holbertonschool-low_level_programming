#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_dlistint - function that prints all the elements of a list
 * @h: first element of the list.
 * Return: the numbers of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t elements = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		elements++;
		h = h->next;
	}
	return (elements);
}
