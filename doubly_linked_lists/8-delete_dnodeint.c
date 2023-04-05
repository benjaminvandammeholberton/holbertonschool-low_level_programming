#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - function that deletes the node at index of a list
 * @head: head of the list
 * @index: index of the node that should be deleted
 * Return: 1 for success, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp;
	dlistint_t *tmpprev;
	dlistint_t *tmpnext;
	unsigned int i;

	tmp = tmpprev = tmpnext = *head;

	if (*head == NULL)
		return (-1);

	if (index == 0)
		*head = (*head)->next;

	else
		{
			for (i = 0; i < index; i++)
			tmp = tmp->next;
			for (i = 0; i < index - 1; i++)
			tmpprev = tmpprev->next;
			for (i = 0; i < index + 1; i++)
			tmpnext = tmp->next;
		}

	tmpprev->next = tmpnext;
	tmpnext->prev = tmpprev;
	free(tmp);
	return (1);
}
