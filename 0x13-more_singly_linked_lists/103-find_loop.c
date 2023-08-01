#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: pointer to the first node
 * Return: address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *two = head;
	listint_t *three = head;

	if (head == NULL)
		return (NULL);

	while (three && two && three->next)
	{
		three = three->next->next;
		two = two->next;
		if (three == two)
		{
			two = head;
			while (two != three)
			{
				two = three->next;
				three = three->next;
			}
			return (three);
		}
	}

	return (NULL);
}

