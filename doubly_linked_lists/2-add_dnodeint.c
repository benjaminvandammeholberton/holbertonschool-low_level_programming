#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint - Function that prints a new node at the beginning
 * of a list
 * @head: head of the list
 * @n: integer to include in the new element of the list
 * Return: the address of the new element or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = *head;

	if (*head != NULL)
		(*head)->prev = new;

	*head = new;
	return (*head);
}
