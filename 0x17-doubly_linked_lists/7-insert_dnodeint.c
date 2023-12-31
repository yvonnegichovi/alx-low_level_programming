#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - nserts a new node at a given position
 * @h: pointer to the first node of the list
 * @idx: index of the list where the new node should be added starts at 0
 * @n: value stored in the new node
 * Return: the address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *current = *h;
	unsigned int k = 0;

	if (!new)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = NULL;
	if (idx == 0)
	{
		new->next = *h;
		if (*h != NULL)
			(*h)->prev = new;
		*h = new;
		return (new);
	}
	while (current != NULL)
	{
		if (k == idx)
		{
			new->next = current;
			new->prev = current->prev;
			if (current->prev != NULL)
				current->prev->next = new;
			current->prev = new;
			return (new);
		}
		current = current->next, k++;
	}
	if (k == idx)
	{
		while (current->next != NULL)
			current = current->next;
		current->next = new;
		new->prev = current;
		return (new);
	}
	free(new);
	return (NULL);
}
