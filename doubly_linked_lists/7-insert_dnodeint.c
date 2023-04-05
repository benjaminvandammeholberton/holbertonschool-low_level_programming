#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - function that inserts a new node
 * at a given position of a list
 * @h: head of the list
 * @idx: index of the list where the new node should be added
 * @n: integer added to the new node as data.
 * Return: the adress of the new node or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new;
	dlistint_t *tmpprev;
	dlistint_t *tmpnext;
	unsigned int i;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	tmpprev = *h;
	tmpnext = *h;

	new->n = n;
	for (i = 0 ; i < idx - 1; i++)
	{
		tmpprev = tmpprev->next;
		if (tmpprev == NULL)
			return (NULL);
	}
	for (i = 0; i < idx; i++)
	{
		tmpnext = tmpnext->next;
		if (tmpnext == NULL)
			return (NULL);
	}
	new->prev = tmpprev;
	new->next = tmpnext;
	tmpprev->next = new;
	tmpnext->prev = new;
	return (new);
}
