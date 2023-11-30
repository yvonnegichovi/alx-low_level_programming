#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
    hash_table_t *ht;
    unsigned long int i = 0;

    ht = hash_table_create(1024);
    hash_table_set(ht, "betty", "cool");
    hash_table_set(ht, "hetairas", "value1");
    hash_table_set(ht, "mentioner", "value2");
    hash_table_set(ht, "heliotropes", "value3");
    hash_table_set(ht, "neurospora", "value4");
    hash_table_set(ht, "depravement", "value5");
    hash_table_set(ht, "serafins", "value6");
    hash_table_set(ht, "stylist", "value7");
    hash_table_set(ht, "subgenera", "value8");
    hash_table_set(ht, "joyful", "value9");
    hash_table_set(ht, "synaphea", "value10");
    hash_table_set(ht, "redescribed", "value11");
    hash_table_set(ht, "urites", "value12");
    hash_table_set(ht, "dram", "value13");
    hash_table_set(ht, "vivency", "value14");

    printf("Hash Table:\n");
    for (i = 0; i < ht->size; i++)
    {
        hash_node_t *current = ht->array[i];
        while (current != NULL)
	{
            printf("Index %lu: Key='%s', Value='%s'\n", i, current->key, current->value);
            current = current->next;
        }
    }
    return (EXIT_SUCCESS);
}
