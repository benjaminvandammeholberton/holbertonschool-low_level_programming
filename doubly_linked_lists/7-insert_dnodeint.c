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
	dlistint_t *tmp;
	unsigned int i;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	tmp = *h;
	if (idx == 0)
	{
		add_dnodeint(h, n);
		return (new);
	}
	for (i = 0; i < idx; i++)
	{
		tmp = tmp->next;
		if (tmp == NULL)
			return (NULL);
	}
	if (tmp->next == NULL)
	{
		add_dnodeint_end(h, n);
		return (new);
	}
	new->prev = tmp->prev;
	tmp->prev->next = new;
	new->next = tmp;
	tmp->prev = new;
	return (new);
}

