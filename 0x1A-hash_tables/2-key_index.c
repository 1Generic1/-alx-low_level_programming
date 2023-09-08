#include <stdio.h>
#include <stdlib.h>
#include "hash_tables.h"

/**
 * key_index - Calculates the index for a key in a hash table's array.
 * @key: The key to be hashed.
 * @size: The size of the array in the hash table.
 *
 * Return: The index at which the key should be stored.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_code;
	hash_code = hash_djb2(key);
	return(hash_code % size);	
}
