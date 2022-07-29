/*
 * Lois Lade Akinrele <lois7lade@gmail.com>
 */

#include "hash_tables.h"

/**
 * hash_table_get - retrieves an element from the hash table
 * that's associated with the given key
 * @ht: The hash table to retrieve an element from
 * @key: the key to look for
 *
 * Return: success - the value associated with key
 * failure - NULL if key couldnt be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int hashIndex;
	hash_node_t *element;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	hashIndex = key_index((const unsigned char *)key, ht->size);
	if (hashIndex >= ht->size)
		return (NULL);

	element = ht->array[hashIndex];

	/*Ensure that we move to a non NULL value*/
	while (element && strcmp(element->key, key) != 0)
		element = element->next;

	return ((element == NULL) ? NULL : element->value);
}
