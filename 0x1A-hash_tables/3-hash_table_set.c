#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash table
 * @ht:  is the hash table you want to add or update the key/value to
 * @key:  is the key. key can not be an empty string
 * @value: 1 if it succeeded, 0 otherwise
 *
 * Return: Either 1 on Success or 0 on Fail
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int key_i;
	hash_node_t *new_key = NULL;

	if (ht == NULL || (key == NULL || value == NULL))
		return (0);

	key_i = key_index((const unsigned char *)key, ht->size);
	new_key = malloc(sizeof(hash_node_t));
	if (new_key == NULL)
		return (0);

	new_key->key = strdup(key);
	new_key->value = strdup(value);
	new_key->next = ht->array[key_i];
	ht->array[key_i] = new_key;

	return (1);
}
