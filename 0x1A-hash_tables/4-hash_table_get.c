#include "hash_tables.h"

/**
 * hash_table_get - a function that retrieves a value associated with a key
 * @ht: the hash table you want to look into
 * @key: the key you are looking for
 * Return:  the value associated with the element, or NULL
*/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *item, *node;

	if (!ht || !key)
		return (NULL);
	idx = key_index((const unsigned char *)key, ht->size);
	item = ht->array[idx];
	if (!item)
		return (NULL);
	if (item->next == NULL)
		return (item->value);
	node = item;
	while (node)
	{
		if (!strcmp(node->key, key))
		return (node->value);
		node = node->next;
	}
	return (NULL);
}
