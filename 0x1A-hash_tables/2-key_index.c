#include "hash_tables.h"

/**
 * key_index - Uses the djb2 algorithm. to give the index of a key
 * @key: The key to get the index of.
 * @size: The size of the array of the hash table.
 *
 * Return: the index at which the key/value pair should be 
 * stored in the array of the hash table
 *
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
