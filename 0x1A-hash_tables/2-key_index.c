#include "hash_tables.h"

/**
 * key_index - returns the index at which the key should be stored
 * @key: key to be stored in the hash table
 * @size: size of the hash table
 * Return: returns index at which key should be stored
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = (hash_djb2(key) % size);

	return (index);
}
