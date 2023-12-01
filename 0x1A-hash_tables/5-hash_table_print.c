#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table
 * Return: void
 *
 * Description: print the key/value in the order that
 * they appear in the array of hash
 * If ht is NULL, don’t print anything
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current;
	int printed = 0;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current != NULL)
		{
			if (printed > 0)
				printf(", ");
			printf("'%s': '%s'", current->key, current->value);
			current = current->next;
			printed = 1;
		}
	}
	printf("}\n");
}
