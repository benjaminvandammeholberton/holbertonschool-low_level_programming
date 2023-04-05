#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_dnodeint_at_index  - function that returns the nth node of a list
 * @head: first element of the list
 * @index: index of the node
 * Return: The nth node of the list, NULL if nodee does not exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int i;

	tmp = head;
	for (i = 0; i < index; i++)
	{
		tmp = tmp->next;
		if (tmp ==  NULL)
			return (NULL);
	}
	return (tmp);
}
