#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - nserts a new node at a given position
 * @head: pointer to the first node of the list
 * @idx: index of the list where the new node should be added starts at 0
 * @n: value stored in the new node
 * Return: the address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new;
	dlistint_t *temp = *h;
	unsigned int k;

	new = malloc(sizeof(dlistint_t));
	if (!h || !new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (idx == 0)
	{
		new->next = *h;
		*h = new;
		return (new);
	}
	for (k = 0; k < idx && temp; k++)
	{
		if (k == idx -1)
		{
			new->next = temp->next;
			temp->next = new;
			return (new);
		}
		else
			temp = temp->next;
	}
	return (NULL);
}
