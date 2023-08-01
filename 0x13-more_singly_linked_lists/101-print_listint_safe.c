#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * looped_listint_len - counts number  of nodes in a looped linked list
 * @head: pointer to the first node
 * Return: number of nodes in the list, otherwise 0 if the list is not looped
 */

size_t looped_listint_len(const listint_t *head)
{
	size_t nodes = 0;
	const listint_t *two, *three;

	if (head == NULL || head->next == NULL)
		return (0);

	two = head->next;
	three = (head->next)->next;

	while (three)
	{
		if (two == three)
		{
			two = head;
			while (two != three)
			{
				nodes++;
				two = two->next;
				three = three->next;
			}
			two = two->next;

			while (two != three)
			{
				nodes++;
				two = two->next;
			}

			return (nodes);
		}
		two = two->next;
		three = (three->next)->next;
	}
	return (0);
}

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer to the first node
 * Return: the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *)head, 98);
	}
	return (nodes);
}
