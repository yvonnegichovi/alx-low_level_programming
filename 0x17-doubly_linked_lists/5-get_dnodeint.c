#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: pointer to the first node of the list
 * @index: the index of the node, starting from 0
 * Return: nth node of a dlistint_t linked list
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int k = 0;
	dlistint_t *temp = head;

	if (!head)
		return (NULL);
	while (k < index && temp != NULL)
	{
		temp = temp->next;
		k++;
	}
	return (temp);
}
