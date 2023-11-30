#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * key_index - gitves you the index of a key
 * @key: the key
 * @size:size of the array of the hash table
 * Return: the index at which the key/value pair should be stored in
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;
	unsigned long int hash_code;

	hash_code = hash_djb2(key);
	index = hash_code % size;
	return (index);
}

