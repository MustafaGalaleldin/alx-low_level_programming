#include "hash_tables.h"

/**
 * hash_table_set - a function that adds an element to the hash table
 * @ht: hashtable
 * @key: the key
 * @value: key value
 * Return: 1 if it succeeded, 0 otherwise
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *item, **cur, *node;
	unsigned long int idx;

	if (!ht || !key)
		return (0);
	item = malloc(sizeof(hash_node_t));
	if (!item)
		return (0);

	item->key = (char *)key;
	item->value = (char *)value;
	item->next = NULL;

	idx = key_index((const unsigned char *)key, ht->size);
	cur = &ht->array[idx];
	if (*cur == NULL)
	{
		*cur = item;
		return (1);
	}
	else
	{
		if (!strcmp((*cur)->key, key))
		{
			(*cur)->value = (char *)value;
			return (1);
		}
		else
		{
			node = *cur;
			*cur = item;
			item->next = node;
			return (1);
		}
	}
	return (0);
}
